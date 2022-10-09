#include "we_actions.h"
#include "we_serial.h"
#include "Arduino.h"

////////////////////////////////////////////////////////
// Pinos
////////////////////////////////////////////////////////

const uint8_t WE_Actions::pin_powerBtn = 2;
const uint8_t WE_Actions::pin_assistantBtn = 3;


////////////////////////////////////////////////////////
// Configurações
////////////////////////////////////////////////////////

void WE_Actions::setup()
{
    pinMode(WE_Actions::pin_powerBtn, INPUT);
    pinMode(WE_Actions::pin_assistantBtn, INPUT);

    // Interrupção do botão de power.
    attachInterrupt(
        digitalPinToInterrupt(WE_Actions::pin_powerBtn),
        powerBtnPressed,
        RISING
    );

    // Interrupção do botão da assistente.
    attachInterrupt(
        digitalPinToInterrupt(WE_Actions::pin_assistantBtn),
        assistantBtnPressed,
        RISING
    );
}

////////////////////////////////////////////////////////
// Eventos
////////////////////////////////////////////////////////

/// Quando o botão de power for pressionado.
void WE_Actions::powerBtnPressed()
{

}

/// Quando o botão da assistente for pressionado.
void WE_Actions::assistantBtnPressed()
{

}
