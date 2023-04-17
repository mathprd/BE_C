#include <string>

using namespace std;

#ifndef CLASSESBE_BOISSON_H
#define CLASSESBE_BOISSON_H

class Boisson{
private :
    float prix ;
    float sucre ;
    float temps_prep ;
public :
    Boisson(float pr, float su, float te) ;
    float Get_prix() ;
    float Get_sucre() ;
    float Get_temps_prep() ;

};

#endif //CLASSESBE_BOISSON_H
