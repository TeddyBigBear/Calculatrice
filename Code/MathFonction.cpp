/* 
MathFonction.cpp
Projet Calculatrice / Groupe : JORE - BORIES - MARTINEZ - PHILIP 
Date de creation : 31/03/2018
*/


#include "mathFonction.hpp"
#include <iostream>
#include <string>
#include <cmath>


using namespace std;

//string MathFonction::calculErreur =""; //je prefere gerer les erreurs plus haut (pour garder une classe statique)


double MathFonction::additioner(double a, double b)
{
    return a + b;
}

double MathFonction::soustraire(double a, double b)
{
    return a - b;
}

double MathFonction::multiplier(double a, double b)
{
    return a * b;
}

double MathFonction::diviser(double a, double b)
{
    /* if (b == 0){
        this->calculErreur = "Divison par 0 impossible";
    } */ //gestion des erreurs plus haut
    return a / b;
}

double MathFonction::pourcentage(double a, double b)
{
    /*quand on appui sur pourcent le dernier nombre rentré represente 
    le pourcentage de l'avant dernier nombre rentré.
    ex : '1000' '40' '%' donne dans la stack : '1000' '400'
    */
    return a * (b / 100);
}

double MathFonction::puissance(double a, double b)
{
    return pow(a, b);
}

double MathFonction::carre(double a)
{
    return pow(a, 2);
}