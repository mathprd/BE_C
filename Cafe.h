#include <string>
#include "Boisson.h"

using namespace std;

#ifndef CLASSESBE_CAFE_H
#define CLASSESBE_CAFE_H

class Cafe : public Boisson {
private :
    float dose_cafe ;
    int lait ;
    int caramel ;
    int vanille ;
public :
    enum type_cafe {
        Expresso = 0 ,
        Macchiato = 1 ,
        Capuccino = 2 ,
        Caramel = 3 ,
        Vanille = 4
    };

    Cafe(float pr, float su, float te, float dose, int la, int ca, int va) ;

    static Cafe* Creer_Cafe (type_cafe type) ;

    float Get_dose_cafe () ;
    int Get_lait () ;
    int Get_caramel () ;
    int Get_vanille () ;

};


#endif //CLASSESBE_CAFE_H
