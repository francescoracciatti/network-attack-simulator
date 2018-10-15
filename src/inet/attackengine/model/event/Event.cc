//
// Created by Francesco Racciatti on 15/10/2018.
//

#include "Event.h"

namespace attack
{

std::ostream& operator<<(std::ostream& os, event_t type)
{
    switch ( type )
    {
        case event_t::ELEMENT_MISPLACE   : os << "ELEMENT_MISPLACE";    break;
        case event_t::ELEMENT_ROTATE     : os << "ELEMENT_ROTATE";      break;
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

Event::Event(attack::event_t type)
        : type(type)
{
}

event_t Event::getType() const
{
    return type;
}

Event::~Event()
{
}

}
