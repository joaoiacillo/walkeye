/**
 * Controla o sensor de distância.
 *
 * @author João Pedro Iacillo Soares <joaopiacillo@outlook.com.br>
 * @version 1.0.0
 */

#include "Arduino.h"
#include "../include/we_distance.h"

////////////////////////////////////////////////////////
// Pinos
////////////////////////////////////////////////////////

const uint8_t WE_Distance::pin_trigger = 7;
const uint8_t WE_Distance::pin_echo = 8;

////////////////////////////////////////////////////////
// Configurações
////////////////////////////////////////////////////////

void WE_Distance::setup()
{
    pinMode(WE_Distance::pin_trigger, OUTPUT);
    pinMode(WE_Distance::pin_echo, INPUT);
}

////////////////////////////////////////////////////////
// Trigger
////////////////////////////////////////////////////////

void trig()
{
    digitalWrite(WE_Distance::pin_trigger, HIGH);
    delayMicroseconds(10);
    digitalWrite(WE_Distance::pin_trigger, LOW);
}