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

Attack::Attack(attack_t type)
        : type(type)
{
}

Attack::~Attack()
{
}

} /* namespace attack */
