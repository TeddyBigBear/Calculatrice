/* 
 * Projet POO - Calculatrice
 * BORIES - JORE - MARTINEZ - PHILIP
 */

#include "MathFonction.hpp"
#include <iostream>
#include <string>
#include <cmath>


using namespace std;

double MathFonction::Additionner(double a, double b)
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

double MathFonction::Pourcentage(double a, double b)
{
    /*quand on appui sur pourcent le dernier nombre rentré represente 
    le pourcentage de l'avant dernier nombre rentré.
    ex : '1000' '40' '%' donne dans la stack : '400'
    */
    return a * (b / 100);
}

double MathFonction::Puissance(double a, double b)
{
    return pow(a, b);
}

double MathFonction::Carre(double a)
{
    return pow(a, 2);
}

double MathFonction::Cube(double a)
{
    return pow(a, 3);
}

double MathFonction::Expo(double a)
{
    return exp(a);
}

double MathFonction::Racine(double a)
{
    return sqrt(a);
}

double MathFonction::Log(double a)
{
    return log10(a);
}

double MathFonction::Ln(double a)
{
    return log(a);
}

double MathFonction::PuissanceDe10(double a)
{
    return pow(10, a);
}