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
    gestion_evnts::gestion_evnts(){
        stack <int> pile_locale; 
    }

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
        }else{
        double element2 = lire_premier_elements_pile(pile_locale);
        supprimer_premier_elements_pile(pile_locale);

        //on les additionne et on met le resultat dans la pile
        double resultat = MathFonction::Additioner(element1, element2);
        Ajouter_a_la_pile(pile_locale, resultat);
        //on renvoit le resultat a afficher
        return to_string(resultat);
        }
    }
}
string gestion_evnts::boutonSoustraire(){
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

        //on les soustrait et on met le resultat dans la pile
        double resultat = MathFonction::Soustraire(element1, element2);
        Ajouter_a_la_pile(pile_locale, resultat);
        //on renvoit le resultat a afficher
        return to_string(resultat);
    }
}
string gestion_evnts::boutonMultiplier(){
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

        //on les multiplie et on met le resultat dans la pile
        double resultat = MathFonction::Multiplier(element1, element2);
        Ajouter_a_la_pile(pile_locale, resultat);
        //on renvoit le resultat a afficher
        return to_string(resultat);
    }
}
string gestion_evnts::boutonDiviser(){
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

        //on les divise et on met le resultat dans la pile
        double resultat = MathFonction::Diviser(element1, element2);
        Ajouter_a_la_pile(pile_locale, resultat);
        //on renvoit le resultat a afficher
        return to_string(resultat);
    }
}
string gestion_evnts::boutonPourcent(){
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
        //supprimer_premier_elements_pile(pile_locale);
        //ici on ne suprime pas cet element

        //Voir description pourcent dans MathsFonction.cpp
        double resultat = MathFonction::Pourcentage(element1, element2);
        Ajouter_a_la_pile(pile_locale, resultat);
        //on renvoit le resultat a afficher
        return to_string(resultat);
}
string gestion_evnts::boutonPuissance(){
    if (verifier_pile_vide())
    {
        return "Pas suffisament de paramètres"
    }
    else
    {
        //on recupère le premier element de la pile
        double element1 = lire_premier_elements_pile(pile_locale);
        supprimer_premier_elements_pile(pile_locale);
        double resultat = MathFonction::Puissance(element1);
        Ajouter_a_la_pile(pile_locale, resultat);
        //on renvoit le resultat a afficher
        return to_string(resultat);
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