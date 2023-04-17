#include "Sequencement.h"
#include "Ecran.h"

Sequencement::Sequencement(): btn_bleu('b'), btn_jaune('j'), btn_rouge('r'), btn_poussoir('p'), Screen(), etat(0){} ;

void Sequencement::Initialiser_bouttons() {
    btn_bleu.Set_pin(pin) ;  //pin a choisir
    btn_rouge.Set_pin(pin) ;
    btn_jaune.Set_pin(pin) ;
    btn_poussoir.Set_pin(pin) ;
}

int Sequencement::Check_change() {
    int change ;
    int btnbleu ;
    btnbleu = btn_bleu.Get_state() ;

    return change ;
}


void Sequencement::Modifier_Etat() {
    if (etat == 0){
        Screen.Afficher_Ecran_Welcome() ;
    } else if (etat == 1){
        Screen.Afficher_Ecran_Choix_Boisson() ;
    } else if (etat == 2){
        Screen.Afficher_Ecran_Paiment () ;
    } else if (etat == 3){
        Screen.Afficher_Ecran_Ecoulement () ;
    } else if (etat == 4){
        Screen.Afficher_Ecran_Remerciements () ;
    }
}

















