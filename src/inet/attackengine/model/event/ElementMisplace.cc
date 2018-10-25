//
// Created by Francesco Racciatti on 14/10/2018.
//

#include "ElementMisplace.h"

#include "inet/mobility/base/MobilityBase.h"

namespace attack
{

ElementMisplace::ElementMisplace(omnetpp::cModule* targetModule, double x, double y, double z)
        : Event(event_t::ELEMENT_MISPLACE),
          targetModule(targetModule), x(x), y(y), z(z)
{
    if ( targetModule == nullptr )
    {
        throw std::invalid_argument("nullptr as argument");
    }
}

void ElementMisplace::execute()
{
    omnetpp::cModule* mobility = targetModule->getSubmodule("mobility");
    if ( mobility != nullptr )
    {
        inet::check_and_cast<inet::MobilityBase*>(mobility)->forcePosition(x, y, z);
    }
}

} /* namespace attack */
