//
// Created by Francesco Racciatti on 17/10/2018.
//

#include "ElementDisable.h"

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
    // TODO send a signal to the local event processor
}


}