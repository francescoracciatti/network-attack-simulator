//
// Created by Francesco Racciatti on 26/10/2018.
//

#include "Logger.h"

#include "LogMessage_m.h"

#include <ctime>
#include <fstream>

Define_Module(attack::Logger);

namespace attack
{

Logger::Logger()
        : bulk(""), fileName(""), bulkSizeThreshold(0)
{
}

void Logger::initialize()
{
    // Gets the bulk size
    bulkSizeThreshold = par("bulkSizeThreshold").intValue();

    // Gets the base name for the log file
    std::string fileNameBase = par("fileNameBase").stringValue();

    // Builds the log file name appendix
    std::time_t t = std::time(nullptr);
    char appendix[64];
    std::strftime(appendix, sizeof(appendix), "-%F-%T", std::localtime(&t));

    // Assembles the log file name
    fileName.append(fileNameBase)
            .append(appendix)
            .append(".log");
}

void Logger::handleMessage(omnetpp::cMessage* msg)
{
    std::string logLine;
    buildLogLine(&logLine, msg);
    bulk.append(logLine);

    if ( bulk.size() >= bulkSizeThreshold )
    {
        std::ofstream ofilestream;
        ofilestream.open(fileName.c_str(), std::ios::app);
        ofilestream << bulk;
        ofilestream.close();

        bulk.erase();
    }
}

void Logger::buildLogLine(std::string* logLine, omnetpp::cMessage* msg) const
{
    if ( logLine == nullptr || msg == nullptr )
    {
        throw std::invalid_argument("nullptr as argument");
    }

    std::ostringstream ss;
    ss << "[simtime " << msg->getTimestamp().dbl() << "] "
       << "(" << msg->getSenderModuleId() << ") "
       << omnetpp::check_and_cast<LogMessage*>(msg)->getMsg()
       << std::endl;

    logLine->assign(ss.str());
}

} /* namespace attack */
