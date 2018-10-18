//
// Created by Francesco Racciatti on 17/10/2018.
//

#ifndef ATTACK_SIMULATOR_NET_ELEMENTDISABLE_HPP
#define ATTACK_SIMULATOR_NET_ELEMENTDISABLE_HPP

#include "Event.h"

#include "omnetpp.h"

namespace attack
{

//
// Models the action that disables the communication capabilities of a network's node.
//
class ElementDisable : public Event {
public:
    ElementDisable(omnetpp::cModule* targetModule);

    void execute() override;

private:
    omnetpp::cModule* targetModule;
};

}

#endif //ATTACK_SIMULATOR_NET_ELEMENTDISABLE_HPP
