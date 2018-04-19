/* 
 * Projet POO - Calculatrice
 * BORIES - JORE - MARTINEZ - PHILIP
 */

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include <iostream>
#include "catch.hpp"
#include "MathFonction.hpp"

using namespace std;

TEST_CASE("Test fonctions mathématiques", "[MathFonction]") {

    double nb1 = 2;
    double nb2 = 4;

    CHECK(MathFonction::Additionner(nb1, nb2)==6);
    CHECK(MathFonction::Soustraire(nb1, nb2)==-2);

    /*TODO 
    * Faire des tests pour toutes les fonctions de MathFonction
    */

}

