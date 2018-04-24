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

    /*pour comparer des doubles : == ne fonctionne pas
    * on fait donc la différence entre les 2 doubles et on vérifie que ca soit inférieur à la précision
    */
    float precision = 0.0000000001;

    //nombres tests
    double nb1 = 2;
    double nb2 = 4;
    double nb3 = -6;

    //Test basique des fonctions
    CHECK(MathFonction::Additionner(nb1, nb2)==6);
    CHECK(MathFonction::Soustraire(nb1, nb2)==-2);
    CHECK(MathFonction::Multiplier(nb1, nb2)==8);
    CHECK(MathFonction::Diviser(nb1, nb2)==0.5);
    CHECK(MathFonction::Pourcentage(nb1, nb2)==0.08);
    CHECK(MathFonction::Puissance(nb1, nb2)==16);
    CHECK(MathFonction::Carre(nb1)==4);
    CHECK(MathFonction::PuissanceDe10(nb1)==100);
    CHECK(fabs(MathFonction::Expo(nb1)-7.3890560989) < precision);
    CHECK(fabs(MathFonction::Racine(nb1)-1.4142135624) < precision);
    CHECK(fabs(MathFonction::Log(nb1)-0.3010299957) < precision);
    CHECK(fabs(MathFonction::Ln(nb1)-0.6931471806) < precision);
    

    //Test de cas avec 0
    CHECK(MathFonction::Additionner(nb1, 0)==nb1);
    CHECK(MathFonction::Soustraire(nb1, 0)==nb1);
    CHECK(MathFonction::Multiplier(nb1, 0)==0);
    //division impossible
    CHECK(to_string(MathFonction::Diviser(nb1, 0))== "inf");
    CHECK(MathFonction::Pourcentage(nb1, 0)==0);
    CHECK(MathFonction::Puissance(nb1, 0)==1);
    CHECK(MathFonction::Carre(0)==0);
    CHECK(MathFonction::PuissanceDe10(0)==1);
    CHECK(MathFonction::Expo(0)==1);
    CHECK(MathFonction::Racine(0)==0);
    CHECK(to_string(MathFonction::Log(0))=="-inf");
    CHECK(to_string(MathFonction::Ln(0))=="-inf");
    
    //Test de cas négatifs
    CHECK(MathFonction::Additionner(nb1, nb3)==-4);
    CHECK(MathFonction::Soustraire(nb1, nb3)==8);
    CHECK(MathFonction::Multiplier(nb3, nb1)==-12);
    CHECK(MathFonction::Diviser(nb3, nb1)==-3);
    CHECK(MathFonction::Pourcentage(nb1, nb3)==-0.12);
    CHECK(MathFonction::Puissance(nb3, nb1)==36);
    CHECK(MathFonction::Carre(nb3)==36);
    CHECK(MathFonction::PuissanceDe10(nb3)==0.000001);
    CHECK(fabs(MathFonction::Expo(nb3)-0.0024787522) < precision);
    CHECK(to_string(MathFonction::Racine(nb3))=="-nan");
    CHECK(to_string(MathFonction::Log(nb3))=="nan");
    CHECK(to_string(MathFonction::Ln(nb3))=="nan");

}