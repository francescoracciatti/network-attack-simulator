//
// Created by Francesco Racciatti on 25/10/2018.
//

#include "PhysicalAttack.h"

namespace attack
{

PhysicalAttack::PhysicalAttack()
        : Attack(attack_t::PHYSICAL)
{
}

void PhysicalAttack::execute(...)
{
    for ( auto& i : events )
    {
        i->execute();
    }
}

} /* namespace attack */
