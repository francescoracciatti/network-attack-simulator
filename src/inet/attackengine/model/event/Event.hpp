//
// Created by Francesco Racciatti on 13/10/2018.
//

#ifndef ATTACK_SIMULATOR_NET_EVENT_HPP
#define ATTACK_SIMULATOR_NET_EVENT_HPP

#include <iostream>

namespace asnet
{

enum class event_t
{
    ELEMENT_MISPLACE,
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

std::ostream& operator<<(std::ostream& os, event_t type)
{
    switch ( type )
    {
        case event_t::ELEMENT_MISPLACE   : os << "ELEMENT_MISPLACE";    break;
        case event_t::ELEMENT_DISABLE    : os << "ELEMENT_DISABLE";     break;
        case event_t::ELEMENT_ENABLE     : os << "ELEMENT_ENABLE";      break;
        case event_t::ELEMENT_DESTROY    : os << "ELEMENT_DESTROY";     break;
        case event_t::MESSAGE_WRITE      : os << "MESSAGE_WRITE";       break;
        case event_t::MESSAGE_READ       : os << "MESSAGE_READ";        break;
        case event_t::MESSAGE_FORWARD    : os << "MESSAGE_FORWARD";     break;
        case event_t::MESSAGE_INJECT     : os << "MESSAGE_INJECT";      break;
        case event_t::MESSAGE_CREATE     : os << "MESSAGE_CREATE";      break;
        case event_t::MESSAGE_CLONE      : os << "MESSAGE_CLONE";       break;
        case event_t::MESSAGE_DROP       : os << "MESSAGE_DROP";        break;
    }
    return os;
}

//
// Base class to build events.
//
class Event {
public:
    virtual void execute() = 0;

    event_t getType() const { return type; };

    virtual ~Event() {};

protected:
    Event(event_t type) { this->type = type; }

private:
    event_t type;
};

}

#endif //ATTACK_SIMULATOR_NET_EVENT_HPP
