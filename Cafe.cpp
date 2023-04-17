#include "Cafe.h""

Cafe::Cafe(float pr, float su, float te, float dose, int la, int ca, int va): dose_cafe(dose), lait(la), caramel(ca), vanille(va), Boisson(pr, su, te){}


Cafe* Cafe::Creer_Cafe (type_cafe type) {
    Cafe* Mon_Cafe ;
    if (type == Expresso){
        Mon_Cafe = new Cafe(0.33, 2, 10, 10, 0, 0, 0) ;
    } else if (type == Macchiato){
        Mon_Cafe = new Cafe(0.33, 1, 5, 13, 0, 0, 0) ;
    } else if (type == Capuccino) {
        Mon_Cafe = new Cafe(0.33, 5, 8, 8, 1, 0, 0);
    } else if (type == Caramel) {
        Mon_Cafe = new Cafe(0.33, 0, 5, 8, 0, 1, 0);
    } else {
        Mon_Cafe = new Cafe(0.33, 0, 5, 8, 0, 0, 1);
    }
    return Mon_Cafe ;
}


float Cafe::Get_dose_cafe () {
    return dose_cafe ;
}
int Cafe::Get_lait () {
    return lait ;
}
int Cafe::Get_caramel () {
    return caramel ;
}
int Cafe::Get_vanille () {
    return vanille ;
}






