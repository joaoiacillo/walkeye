/**
 * Cabeçalho da namespace WE_Actions.
 *
 * @author João Pedro Iacillo Soares <joaopiacillo@outlook.com.br>
 * @version 1.0.0
 */

#ifndef WE_ACTIONS_H
#define WE_ACTIONS_H

#include "Arduino.h"

namespace WE_Actions
{
    extern const uint8_t pin_powerBtn;
    extern const uint8_t pin_assistantBtn;

    void setup();

    void powerBtnPressed();
    void assistantBtnPressed();
}

#endif