//
// Created by Francesco Racciatti on 21/10/2018.
//

#include "ElementDestroy.h"

#include "inet/attackengine/processor/node/LocalEventProcessor.h"

namespace attack
{

ElementDestroy::ElementDestroy(omnetpp::cModule* targetModule)
        : Event(event_t::ELEMENT_DESTROY),
          targetModule(targetModule)
{
    if ( targetModule == nullptr )
    {
        throw std::invalid_argument("nullptr as argument");
    }
}

void ElementDestroy::execute()
{
    LocalEventProcessor* localEventProcessor =
            omnetpp::check_and_cast<LocalEventProcessor*> (
                    targetModule->getSubmodule(LocalEventProcessor::getModuleName()));
    localEventProcessor->disableElement();
}

} /* namespace attack */
