/* 
 * Projet POO - Calculatrice
 * BORIES - JORE - MARTINEZ - PHILIP
 */

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include <iostream>
#include <cmath>
#include "catch.hpp"
#include "MathFonction.hpp"

using namespace std;

TEST_CASE("Test fonctions mathématiques", "[MathFonction]") {

    double nb1 = 2;
    double nb2 = 4;

    //Test basique des fonctions
    CHECK(MathFonction::Additionner(nb1, nb2)==6);
    CHECK(MathFonction::Soustraire(nb1, nb2)==-2);
    CHECK(MathFonction::Multiplier(nb1, nb2)==8);
    CHECK(MathFonction::Diviser(nb1, nb2)==0.5);
    CHECK(MathFonction::Pourcentage(nb1, nb2)==0.08);
    CHECK(MathFonction::Puissance(nb1, nb2)==16);
    CHECK(MathFonction::Carre(nb1)==4);
    CHECK(MathFonction::Cube(nb1)==8);
    CHECK(MathFonction::Expo(nb1)==exp(2));
    CHECK(MathFonction::Racine(nb1)==sqrt(2));
    CHECK(MathFonction::Log(nb1)==log10(2));
    CHECK(MathFonction::Ln(nb1)==log(2));
    CHECK(MathFonction::PuissanceDe10(nb1)==100);

    //Test de cas spécifiques
    CHECK(MathFonction::Diviser(nb1, 0)==0);
}

