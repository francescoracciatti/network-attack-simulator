//
// Created by Francesco Racciatti on 26/10/2018.
//

#ifndef ATTACK_SIMULATOR_NET_LOGGER_H
#define ATTACK_SIMULATOR_NET_LOGGER_H

#include "omnetpp.h"

#include <string>

namespace attack
{

//
// Provides logging facilities.
//
class Logger : public omnetpp::cSimpleModule {
public:
    Logger();

protected:
    void initialize() override;

    void handleMessage(omnetpp::cMessage* msg) override;

private:
    void buildLogLine(std::string* logLine, omnetpp::cMessage* msg) const;

private:
    std::string bulk;

    std::string fileName;

    int bulkSizeThreshold;
};

} /* namespace attack */

#endif //ATTACK_SIMULATOR_NET_LOGGER_H
