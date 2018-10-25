//
// Created by Francesco Racciatti on 13/10/2018.
//

#ifndef ATTACK_SIMULATOR_NET_EVENT_H
#define ATTACK_SIMULATOR_NET_EVENT_H

#include <iostream>

namespace attack
{

enum class event_t
{
    EXPRESSION,
    ELEMENT_MISPLACE,
    ELEMENT_ROTATE,
    ELEMENT_DISABLE,
    ELEMENT_ENABLE,
    ELEMENT_DESTROY,
    MESSAGE_WRITE,
    MESSAGE_READ,
    MESSAGE_FORWARD,
    MESSAGE_INJECT,
    MESSAGE_CREATE,
    MESSAGE_CLONE,
    MESSAGE_DROP
};

std::ostream& operator<<(std::ostream& os, event_t type);

//
// Base class to build events.
//
class Event {
public:
    virtual void execute() = 0;

    event_t getType() const;

    virtual ~Event();

protected:
    Event(event_t type);

private:
    event_t type;
};

} /* namespace attack */

#endif //ATTACK_SIMULATOR_NET_EVENT_H
