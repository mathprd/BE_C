#include <Adafruit_MCP23X08.h>
#include <Adafruit_MCP23X17.h>

using namespace std;

#ifndef CLASSESBE_BOUTON_H
#define CLASSESBE_BOUTON_H

class Bouton{
private :
    char couleur ;
    int state ;
    int pin ;
    Adafruit_MCP23X08* mcp;
public :

    Bouton(char couleur) ;

    int Get_pin () ;
    void Set_pin (int pi) ;
    void Set_pin (int pi, Adafruit_MCP23X08* mc) ;

    char Get_couleur () ;
    void Set_couleur (char coul) ;

    int Get_state () ;
    void Set_state () ;
};

#endif //CLASSESBE_BOUTON_H
