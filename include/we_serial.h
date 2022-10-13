/**
 * Cabeçalho da namespace WE_Serial.
 *
 * @author João Pedro Iacillo Soares <joaopiacillo@outlook.com.br>
 * @version 1.0.0
 */

#ifndef WE_SERIAL_H
#define WE_SERIAL_H

#include "Arduino.h"

namespace WE_Serial
{
    extern String message;

    extern const long baudRate;

    void setup();

    void set(String);
    void clear();
    void add(String);

    void send();
    void quickSend(String);
}

#endif
