//
// Created by Francesco Racciatti on 20/10/2018.
//

#include "ElementEnable.h"

#include "inet/attackengine/processor/LocalEventProcessor.h"

namespace attack
{

ElementEnable::ElementEnable(omnetpp::cModule* targetModule)
        : Event(event_t::ELEMENT_ENABLE),
          targetModule(targetModule)
{
    if ( targetModule == nullptr )
    {
        throw std::invalid_argument("nullptr as argument");
    }
}

void ElementEnable::execute()
{
    LocalEventProcessor* localEventProcessor =
            omnetpp::check_and_cast<LocalEventProcessor*>(
                    targetModule->getSubmodule(LocalEventProcessor::getModuleName()));
    localEventProcessor->enableElement();
}

} /* namespace attack */
