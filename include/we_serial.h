/**
 * Cabeçalho da namespace WE_Serial.
 *
 * @author João Pedro Iacillo Soares <joaopiacillo@outlook.com.br>
 */

#ifndef WE_SERIAL_H
#define WE_SERIAL_H

#include "Arduino.h"

////////////////////////////////////////////////////////
// Setup
////////////////////////////////////////////////////////

void setupSerial(long);

////////////////////////////////////////////////////////
// Funções
////////////////////////////////////////////////////////

void print(String);
void print(String, String);

void print(String[]);
void print(String[], String);

#endif
