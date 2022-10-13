/**
 * Cabeçalho da namespace WE_Distance.
 *
 * @author João Pedro Iacillo Soares <joaopiacillo@outlook.comr>
 * @version 1.0.0
 */

#ifndef WE_DISTANCE_H
#define WE_DISTANCE_H

#include "Arduino.h"

namespace WE_Distance
{
    extern const uint8_t pin_trigger;
    extern const uint8_t pin_echo;

    void setup();

    void trig();
}

#endif