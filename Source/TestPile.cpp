/* 
 * Projet POO - Calculatrice
 * BORIES - JORE - MARTINEZ - PHILIP
 */

//#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include <iostream>
#include "catch.hpp"
#include "Pile.hpp"

using namespace std;

TEST_CASE("Test Pile", "[Pile]") {

    double nb1=2;
    double nbRecupere;

    Pile *MyPileTest = new Pile();

    //Ajout un element
    MyPileTest->Ajouter(nb1);
	CHECK(MyPileTest->_myPile.top()==2);

	//Retrait un element
	nbRecupere=MyPileTest->Recuperer();
	CHECK(nbRecupere==2);

	/*TODO 
    * Faire des tests pour toutes les fonctions de la Pile 
    * en ajoutant plusieurs nombres 
    */

}

