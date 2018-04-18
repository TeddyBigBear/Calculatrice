/* 
pile.hpp
Projet Calculatrice / Groupe : JORE - BORIES - MARTINEZ - PHILIP 
Date de creation : 31/03/2018
*/

//librairies externe
#include <iostream>
#include <stack>

using namespace std;
 
class Pile
{

public:
    Pile();
    ~Pile();

    stack<double> _myPile;

    void ajouter (double element);
    double recuperer ();
    void supprimer ();
};