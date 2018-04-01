/* 
MathFonction.cpp
Projet Calculatrice / Groupe : Sonia 
Date de creation : 31/03/2018
*/


#include "MathFonction.hpp"
#include <iostream>
#include <string>

using namespace std;

string MathFonction::calculErreur ="";


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
    if (b == 0){
        this->calculErreur = "Divison par 0 impossible";
    }
    return a / b;
}