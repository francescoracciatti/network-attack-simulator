//
// Created by Francesco Racciatti on 20/10/2018.
//

#ifndef ATTACK_SIMULATOR_NET_ELEMENTENABLE_H
#define ATTACK_SIMULATOR_NET_ELEMENTENABLE_H

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

} /* namespace attack */

#endif //ATTACK_SIMULATOR_NET_ELEMENTENABLE_H
