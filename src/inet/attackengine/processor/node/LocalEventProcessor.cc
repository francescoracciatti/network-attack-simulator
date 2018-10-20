//
// Created by Francesco Racciatti on 19/10/2018.
//

#include "LocalEventProcessor.h"

Define_Module(attack::LocalEventProcessor);

namespace attack
{

const char* LocalEventProcessor::getModuleName()
{
    return "localEventProcessor";
}

LocalEventProcessor::LocalEventProcessor()
    : isElementDisabled(false)
{
}

void LocalEventProcessor::disableElement()
{
    isElementDisabled = true;
}

void LocalEventProcessor::enableElement()
{
    isElementDisabled = false;
}

}