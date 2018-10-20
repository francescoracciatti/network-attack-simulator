//
// Created by Francesco Racciatti on 20/10/2018.
//

#ifndef ATTACK_SIMULATOR_NET_ELEMENTENABLE_HPP
#define ATTACK_SIMULATOR_NET_ELEMENTENABLE_HPP

#include "Event.h"

#include "omnetpp.h"

namespace attack
{

//
// Models the action that enables the communication capabilities of a network's node.
//
class ElementEnable : public Event {
public:
    ElementEnable(omnetpp::cModule* targetModule);

    void execute() override;

private:
    omnetpp::cModule* targetModule;
};

}

#endif //ATTACK_SIMULATOR_NET_ELEMENTENABLE_HPP
