//
// Created by Francesco Racciatti on 15/10/2018.
//

#ifndef ATTACK_SIMULATOR_NET_ELEMENTROTATE_HPP
#define ATTACK_SIMULATOR_NET_ELEMENTROTATE_HPP

#include "Event.h"

#include "omnetpp.h"
#include "inet/common/Units.h"

namespace attack
{

//
// Models the action that rotates a network's node.
//
class ElementRotate : public Event {
public:
    ElementRotate(omnetpp::cModule* targetModule,
            inet::units::values::rad alpha, inet::units::values::rad beta, inet::units::values::rad gamma);

    virtual void execute() override;

private:
    omnetpp::cModule* targetModule;

    const inet::units::values::rad alpha;

    const inet::units::values::rad beta;

    const inet::units::values::rad gamma;
};

}

#endif //ATTACK_SIMULATOR_NET_ELEMENTROTATE_HPP
