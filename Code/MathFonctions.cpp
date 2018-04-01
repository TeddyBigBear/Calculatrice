/* 
MathFonction.cpp
Projet Calculatrice / Groupe : Sonia 
Date de creation : 31/03/2018
*/


#include "MathFonctions.hpp"

using namespace std;

namespace MathFonction
{
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
        return a / b;
    }
}