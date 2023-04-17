#include "The.h"


The::The(float pr, float su, float te): Boisson(pr, su, te){}


The* The::Creer_The (type_the type) {
    The* Mon_The ;
    if (type == Vert){
        Mon_The = new The(0.33, 2, 10) ;
    } else if (type == Noir){
        Mon_The = new The(0.33, 1, 5) ;
    } else if (type == Blanc) {
        Mon_The = new The(0.33, 5, 8);
    } else {
        Mon_The = new The(0.33, 0, 5);
    }
    return Mon_The ;
}