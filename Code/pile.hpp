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

    bool verifier_pile_vide();
    void Ajouter_a_la_pile (double element);
    double lire_premier_elements_pile ();
    double lire_deuxiemme_elements_pile ();
    void supprimer_premier_elements_pile ();
};