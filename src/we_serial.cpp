#include "Arduino.h"
#include "we_serial.h"


////////////////////////////////////////////////////////
// Variáveis
////////////////////////////////////////////////////////

/// Mensagem a ser enviada.
String WE_Serial::message = "";

/// Taxa de velocidade de informação.
const long WE_Serial::baudRate = 9600;


////////////////////////////////////////////////////////
// Configurações
////////////////////////////////////////////////////////

void WE_Serial::setup()
{
    Serial.begin(WE_Serial::baudRate);
}

////////////////////////////////////////////////////////
// Mensagem
////////////////////////////////////////////////////////

/// Define o conteúdo da mensagem.
void WE_Serial::set(String msg)
{
    WE_Serial::message = msg;
}

/// Limpa o conteúdo da mensagem.
void WE_Serial::clear()
{
    WE_Serial::message = "";
}

/// Adiciona um texto à mensagem.
void WE_Serial::add(String text)
{
    WE_Serial::message += text;
}

/// Envia a mensagem e limpa seu conteúdo da memória.
void WE_Serial::send()
{
    Serial.println(WE_Serial::message);
    WE_Serial::clear();
}

/// Envia uma mensagem rápida para o Serial.
void WE_Serial::quickSend(String msg)
{
    Serial.println(msg);
}
