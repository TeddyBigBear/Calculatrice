/* 
gestion_evnts.cpp
Projet Calculatrice / Groupe : JORE - BORIES - MARTINEZ - PHILIP 
Date de creation : 02/04/2018
*/

#include <string>
#include "gestion_evnts.hpp"
#include "pile.hpp"
#include "MathFonction.hpp"

using namespace std;

//implementation constructeur


/* 
Cette fonction est a utiliser lorseque l'utilisateur appuie sur le boutton +
il n'y a pas de parametre
*/
string gestion_evnts::boutonAdditionner()
{

    if (verifier_pile_vide())
    {
        return "Pas suffisament de paramètres"
    }
    else
    {

        //on recupère les deux premiers elements de la pile
        double element1 = lire_premier_elements_pile(pile_locale);
        supprimer_premier_elements_pile(pile_locale);
        if (verifier_pile_vide()){
            return "Pas suffisament de paramètres";
            break;
        }
        double element2 = lire_premier_elements_pile(pile_locale);
        supprimer_premier_elements_pile(pile_locale);

        //on les additionne et on met le resultat dans la pile
        double resultat = MathFonction::additionne(element1, element2);
        Ajouter_a_la_pile(pile_locale, resultat);
        //on renvoit le resultat a afficher
        return to_string(resultat);
    }
}

string gestion_evnts::boutonSoustraire(){
}
string gestion_evnts::boutonMultiplier(){
}
string gestion_evnts::boutonDiviser(){
}
string gestion_evnts::boutonPourcent(){
}
string gestion_evnts::boutonPuissance(){
}

//Boutons Memoire
string gestion_evnts::boutonMPlus(){
}
string gestion_evnts::boutonMRC(){
}
string gestion_evnts::boutonMC(){
}

//Boutons Test
string gestion_evnts::boutonTest(){
}
string gestion_evnts::boutonTest2(){
}