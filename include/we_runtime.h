#ifndef WE_RUNTIME_H
#define WE_RUNTIME_H

#include "Arduino.h"

namespace WE_Runtime
{
    extern bool running;

    void start();
    void stop();
}

#endif