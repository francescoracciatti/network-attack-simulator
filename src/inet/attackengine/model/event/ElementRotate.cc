//
// Created by Francesco Racciatti on 15/10/2018.
//

#include "ElementRotate.h"

#include "inet/mobility/base/RotatingMobilityBase.h"

namespace attack
{

ElementRotate::ElementRotate(omnetpp::cModule* targetModule,
        inet::units::values::rad alpha, inet::units::values::rad beta, inet::units::values::rad gamma)
        : Event(event_t::ELEMENT_ROTATE),
          alpha(alpha), beta(beta), gamma(gamma)
{
    if ( targetModule == nullptr )
    {
        throw std::invalid_argument("nullptr as argument");
    }
}

void ElementRotate::execute()
{
    omnetpp::cModule* mobility = targetModule->getSubmodule("mobility");
    if ( mobility != nullptr )
    {
        try
        {
            inet::check_and_cast<inet::RotatingMobilityBase*>(mobility)->forceRotation(alpha, beta, gamma);
        }
        catch ( ... )
        {
            inet::check_and_cast<inet::MobilityBase*>(mobility)->forceRotation(alpha, beta, gamma);
        }
    }
}

}