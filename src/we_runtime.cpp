/**
 * Controla o estado de execução do sistema.
 *
 * @author João Pedro Iacillo Soares <joaopiacillo@outlook.com.br>
 * @version 1.0.0
 */

#include "we_runtime.h"
#include "we_serial.h"
#include "Arduino.h"


////////////////////////////////////////////////////////
// Variáveis
////////////////////////////////////////////////////////

/// Estado atual do runtime.
bool WE_Runtime::running = true;


////////////////////////////////////////////////////////
// Controle
////////////////////////////////////////////////////////

/// Inicia a execução do programa.
void WE_Runtime::start()
{
    WE_Runtime::running = true;
    WE_Serial::quickSend("Runtime started");
}

/// Para a execução do programa.
void WE_Runtime::stop()
{
    WE_Runtime::running = false;
    WE_Serial::quickSend("Runtime ended");
}
