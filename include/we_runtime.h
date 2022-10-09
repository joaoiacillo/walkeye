/**
 * Cabeçalho da namespace WE_Runtime.
 *
 * @author João Pedro Iacillo Soares <joaopiacillo@outlook.com.br>
 * @version 1.0.0
 */

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