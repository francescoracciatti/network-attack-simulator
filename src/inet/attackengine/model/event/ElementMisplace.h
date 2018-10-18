//
// Created by Francesco Racciatti on 14/10/2018.
//

#ifndef ATTACK_SIMULATOR_NET_ELEMENTMISPLACE_HPP
#define ATTACK_SIMULATOR_NET_ELEMENTMISPLACE_HPP

#include "Event.h"

#include "omnetpp.h"

namespace attack
{

//
// Models the action that misplaces a network's node.
//
class ElementMisplace : public Event {
public:
    ElementMisplace(omnetpp::cModule* targetModule, double x, double y, double z);

    void execute() override;

private:
    omnetpp::cModule* targetModule;

    const double x;

    const double y;

    const double z;
};

}

#endif //ATTACK_SIMULATOR_NET_ELEMENTMISPLACE_HPP
