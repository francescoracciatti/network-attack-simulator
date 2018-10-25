//
// Created by Francesco Racciatti on 25/10/2018.
//

#ifndef ATTACK_SIMULATOR_NET_PHYSICALATTACK_H
#define ATTACK_SIMULATOR_NET_PHYSICALATTACK_H

#include "Attack.h"

namespace attack
{

class PhysicalAttack : public Attack {
public:
    PhysicalAttack();

    void execute(...) override;
};

} /* namespace attack */

#endif //ATTACK_SIMULATOR_NET_PHYSICALATTACK_H
