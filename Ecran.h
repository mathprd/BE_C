#include <Wire.h>
#include <Adafruit_RGBLCDShield.h>
#include <utility/Adafruit_MCP23017.h>

#ifndef CLASSESBE_ECRAN_H
#define CLASSESBE_ECRAN_H

class Ecran {
private :
    Adafruit_RGBLCDShield* lcd ;
public :

    Ecran() ;

    void Afficher_Ecran_Welcome () ;
    void Afficher_Ecran_Choix_Boisson () ;
    void Afficher_Ecran_Paiment () ;
    void Afficher_Ecran_Ecoulement () ;
    void Afficher_Ecran_Remerciements () ;


};


#endif //CLASSESBE_ECRAN_H
