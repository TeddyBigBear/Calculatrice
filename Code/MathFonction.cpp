/* 
MathFonction.cpp
Projet Calculatrice / Groupe : JORE - BORIES - MARTINEZ - PHILIP 
Date de creation : 31/03/2018
*/


#include "MathFonction.hpp"
#include <iostream>
#include <string>
#include <cmath>


using namespace std;

//string MathFonction::calculErreur =""; //je prefere gerer les erreurs plus haut (pour garder une classe statique)


double MathFonction::Additioner(double a, double b)
{
    return a + b;
}

double MathFonction::Soustraire(double a, double b)
{
    return a - b;
}

double MathFonction::Multiplier(double a, double b)
{
    return a * b;
}

double MathFonction::Diviser(double a, double b)
{
    /* if (b == 0){
        this->calculErreur = "Divison par 0 impossible";
    } */ //gestion des erreurs plus haut
    return a / b;
}
double MathFonction::Pourcentage(double a, double b)
{
    /*quand on appui sur pourcent le dernier nombre rentré represente 
    le pourcentage de l'avant dernier nombre rentré.
    ex : '1000' '40' '%' donne dans la stack : '1000' '400'
    */
    return a * (b / 100);
}
double MathFonction::Puissance(double a, double b)
{
    return pow(a, b);
}