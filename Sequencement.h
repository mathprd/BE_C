#include "Bouton.h"
#include "Ecran.h"


#ifndef CLASSESBE_SEQUENCEMENT_H
#define CLASSESBE_SEQUENCEMENT_H

class Sequencement{
private :
    int etat ;
    Bouton btn_rouge ;
    Bouton btn_jaune ;
    Bouton btn_bleu ;
    Bouton btn_poussoir ;
    Ecran Screen ;

public :
    Sequencement() ;

    void Initialiser_bouttons() ;
    int Check_change() ;
    void Modifier_Etat() ;
};

#endif //CLASSESBE_SEQUENCEMENT_H
