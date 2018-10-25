//
// Created by Francesco Racciatti on 17/10/2018.
//

#include "ElementDisable.h"

#include "inet/attackengine/processor/node/LocalEventProcessor.h"

namespace attack
{

ElementDisable::ElementDisable(omnetpp::cModule* targetModule)
        : Event(event_t::ELEMENT_DISABLE),
          targetModule(targetModule)
{
    if ( targetModule == nullptr )
    {
        throw std::invalid_argument("nullptr as argument");
    }
}

void ElementDisable::execute()
{
    LocalEventProcessor* localEventProcessor =
            omnetpp::check_and_cast<LocalEventProcessor*> (
                    targetModule->getSubmodule(LocalEventProcessor::getModuleName()));
    localEventProcessor->disableElement();
}

} /* namespace attack */
