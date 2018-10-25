//
// Created by Francesco Racciatti on 25/10/2018.
//

#include "Attack.h"

namespace attack
{

std::ostream& operator<<(std::ostream& os, attack_t type)
{
    switch ( type )
    {
        case attack_t::PHYSICAL         : os << "PHYSICAL";         break;
        case attack_t::CONDITIONAL      : os << "CONDITIONAL";      break;
        case attack_t::UNCONDITIONAL    : os << "UNCONDITIONAL";    break;
    }
    return os;
}

attack_t Attack::getType() const
{
    return type;
}

void Attack::appendEvent(std::unique_ptr<Event> event)
{
    events.push_back(std::move(event));
}

Attack::Attack(attack_t type)
        : type(type)
{
}

Attack::~Attack()
{
}

} /* namespace attack */
