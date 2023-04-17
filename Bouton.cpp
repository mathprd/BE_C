#include "Bouton.h"




Bouton::Bouton(char couleur) : couleur(couleur), mcp(nullptr){} ;


int Bouton::Get_pin () {
    return pin ;
}

void Bouton::Set_pin(int pi) {
    pin = pi ;
    pinMode(pin, INPUT);
}
// DANS NOTRE CAS = 32
void Bouton::Set_pin(int pi, Adafruit_MCP23X08* mc) {
    pin = pi ;
    mcp = mc ;
    mcp.pinMode(pi, INPUT);
}


char Bouton::Get_couleur() {
    return couleur ;
}

void Bouton::Set_couleur (char coul){
    couleur=coul ;
}


int Bouton::Get_state() {
    return state ;
}

void Bouton::Set_state() {
    if (mcp != nullptr) {
        if (mcp->digitalRead(pin) == HIGH && state == 0){
            state = 1 ;
        } else {
            state = 0 ;
        }
    } else {
        if (digitalRead(pin) == HIGH && state == 0){
            state = 1 ;
        } else {
            state = 0 ;
        }
    }

}
