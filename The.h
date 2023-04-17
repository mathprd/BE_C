#include <string>
#include "Boisson.h"

using namespace std;

#ifndef CLASSESBE_THE_H
#define CLASSESBE_THE_H

class The : public Boisson {
public :

    enum type_the {
        Vert = 0 ,
        Noir = 1 ,
        Blanc = 2 ,
        Nature = 3
    };

    The(float pr, float su, float te) ;

    static The* Creer_The (type_the type) ;
};



#endif //CLASSESBE_THE_H
