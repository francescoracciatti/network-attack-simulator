//
// Created by Francesco Racciatti on 21/10/2018.
//

#ifndef ATTACK_SIMULATOR_NET_ELEMENTDESTROY_H
#define ATTACK_SIMULATOR_NET_ELEMENTDESTROY_H

#include "Event.h"

#include "omnetpp.h"

namespace attack
{

//
// Models the action that destroys a network's node.
//
class ElementDestroy : public Event {
public:
    ElementDestroy(omnetpp::cModule* targetModule);

    void execute() override;

private:
    omnetpp::cModule* targetModule;
};

} /* namespace attack */

#endif //ATTACK_SIMULATOR_NET_ELEMENTDESTROY_H
