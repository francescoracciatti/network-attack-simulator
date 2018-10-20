//
// Created by Francesco Racciatti on 19/10/2018.
//

#ifndef ATTACK_SIMULATOR_NET_LOCALEVENTPROCESSOR_HPP
#define ATTACK_SIMULATOR_NET_LOCALEVENTPROCESSOR_HPP

#include "omnetpp.h"

namespace attack
{

class LocalEventProcessor : public omnetpp::cSimpleModule {
public:
    static const char* getModuleName();

    LocalEventProcessor();

    void disableElement();

    void enableElement();

private:
    bool isElementDisabled;
};

}

#endif //ATTACK_SIMULATOR_NET_LOCALEVENTPROCESSOR_HPP
