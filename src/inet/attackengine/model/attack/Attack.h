//
// Created by Francesco Racciatti on 25/10/2018.
//

#ifndef ATTACK_SIMULATOR_NET_ATTACK_H
#define ATTACK_SIMULATOR_NET_ATTACK_H

#include <iostream>
#include <memory>

#include "inet/attackengine/model/event/Event.h"

namespace attack
{

enum class attack_t {
    PHYSICAL,
    CONDITIONAL,
    UNCONDITIONAL
};

std::ostream& operator<<(std::ostream& os, attack_t type);

//
// Base class to build attacks.
//
class Attack {
public:
    attack_t getType() const;

    void appendEvent(std::unique_ptr<Event> event);

    virtual void execute(...) = 0;

protected:
    // The ordered sequence of events making the attack
    std::vector<std::unique_ptr<Event>> events;

protected:
    Attack(attack_t type);

    virtual ~Attack();

private:
    attack_t type;
};

} /* namespace attack */

#endif //ATTACK_SIMULATOR_NET_ATTACK_H
