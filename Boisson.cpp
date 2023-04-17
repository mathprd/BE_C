#include "Boisson.h"



Boisson::Boisson(float pr, float su, float te): prix(pr), sucre(su), temps_prep(te) {} ;


float Boisson::Get_prix(){
    return prix ;
}
float Boisson::Get_sucre(){
    return sucre ;
}
float Boisson::Get_temps_prep(){
    return temps_prep ;
}










