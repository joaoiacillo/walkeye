/**
 * Controla a comunicação Serial do Arduino.
 *
 * @author João Pedro Iacillo Soares <joaopiacillo@outlook.com.br>
 */

#include "../include/we_serial.h"
#include "Arduino.h"

////////////////////////////////////////////////////////
// Setup
////////////////////////////////////////////////////////

void setupSerial(long baudRate)
{
    Serial.begin(baudRate);
}

////////////////////////////////////////////////////////
// Print
////////////////////////////////////////////////////////

void print(String msg)
{
    Serial.println(msg);
}

void print(String msg, String end)
{
    Serial.print(msg + end);
}

void print(String msgs[])
{
    String msg = "";
    for (String part : msgs) msg += part;
    Serial.println(msg);
}

void print(String msgs[], String end)
{
    String msg = "";
    for (String part : msgs) msg += part;
    Serial.print(msg + end);
}
