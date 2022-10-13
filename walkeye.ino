/**
 * Ponto de partida de todo o projeto WalkEYE para Arduino.
 *
 * @author João Pedro Iacillo Soares <joaopiacillo@outlook.com.br>
 * @version 1.0.0
 */

////////////////////////////////////////////////////////
// Biblioteca WalkEYE
////////////////////////////////////////////////////////

#include "include/we_serial.h"
#include "include/we_runtime.h"
#include "include/we_actions.h"

////////////////////////////////////////////////////////
// Arduino
////////////////////////////////////////////////////////

void setup()
{
    WE_Serial::setup();
    WE_Actions::setup();
}

void loop()
{
    if (!WE_Runtime::running) return;
}

