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

    void Ajouter (double element);
    double Recuperer ();
    void Supprimer ();
    bool Pile1ElementMinimum();
    bool Pile2ElementsMinimum(); 
};