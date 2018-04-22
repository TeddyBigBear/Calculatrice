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

    double nbVide=0.0;
    double nb1=2;
    double nb2=5;
    double nbRecupere;

    Pile *MyPileTest = new Pile();

    //Ajout d'un élément
    MyPileTest->Ajouter(nb1);
	CHECK(MyPileTest->_myPile.top()==2);

	//Récupération et retrait d'un élément
	nbRecupere=MyPileTest->Recuperer();
	CHECK(nbRecupere==2);

    //Suppresion d'un élément
    MyPileTest->Ajouter(nb1);
    MyPileTest->Ajouter(nb2);
    MyPileTest->Supprimer();
    CHECK(MyPileTest->_myPile.top()==0.0);

    //Au moins 1 élément
    CHECK(MyPileTest->Pile1ElementMinimum()==false);
    MyPileTest->Ajouter(nb1);
    CHECK(MyPileTest->Pile1ElementMinimum()==true);

    //Au moins 2 éléments
	CHECK(MyPileTest->Pile2ElementsMinimum()==false);
    MyPileTest->Ajouter(nb2);
    CHECK(MyPileTest->Pile2ElementsMinimum()==true);

    MyPileTest->Supprimer();

    //Evolution de la pile avec les différents tests unitaires ensemble
    for (double i=0;i<11;i++){
        if (i==0){
            CHECK(MyPileTest->Pile1ElementMinimum()==false);
            CHECK(MyPileTest->Pile2ElementsMinimum()==false);
        }
        MyPileTest->Ajouter(i);
        if (i==0){
            CHECK(MyPileTest->Pile1ElementMinimum()==true);
            CHECK(MyPileTest->Pile2ElementsMinimum()==false);
        }
        if (i==1){
            CHECK(MyPileTest->Pile2ElementsMinimum()==true);
        }
        CHECK(MyPileTest->_myPile.top()==i);
        cout << "Rang" << i+1 << " : " << MyPileTest->_myPile.top() << endl;
    }

    for (double i=10;i>0;i--){
        double nbTest = MyPileTest->Recuperer();
        if (i==2){
            CHECK(MyPileTest->Pile2ElementsMinimum()==true);
        }
        if (i==0){
            CHECK(MyPileTest->Pile1ElementMinimum()==true);
            CHECK(MyPileTest->Pile2ElementsMinimum()==false);
        }
        CHECK(nbTest==i);
        cout << "Rang" << i << " : " << MyPileTest->_myPile.top() << endl;    
    }


}

