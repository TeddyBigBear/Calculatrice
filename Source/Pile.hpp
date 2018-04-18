/* 
 * Projet POO - Calculatrice
 * BORIES - JORE - MARTINEZ - PHILIP
 */

#include <iostream>
#include <stack>

using namespace std;
 
class Pile
{

public:
    double element1, element2, resultatOperation;

    Pile();
    ~Pile();

    stack<double> _myPile;

    void ajouter (double element);
    double recuperer ();
    void supprimer ();
};