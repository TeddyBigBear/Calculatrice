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

    bool isEmpty();
    void ajouter (double element);
    double recuperer ();
    void supprimer ();
};