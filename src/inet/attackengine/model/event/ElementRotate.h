//
// Created by Francesco Racciatti on 15/10/2018.
//

#ifndef ATTACK_SIMULATOR_NET_ELEMENTROTATE_H
#define ATTACK_SIMULATOR_NET_ELEMENTROTATE_H

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

    void execute() override;

private:
    omnetpp::cModule* targetModule;

    const inet::units::values::rad alpha;

    const inet::units::values::rad beta;

    const inet::units::values::rad gamma;
};

} /* namespace attack */

#endif //ATTACK_SIMULATOR_NET_ELEMENTROTATE_H
