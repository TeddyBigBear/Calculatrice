/* 
pile.hpp
Projet Calculatrice / Groupe : JORE - BORIES - MARTINEZ - PHILIP 
Date de creation : 31/03/2018
*/

using namespace std;
 
class Pile
{
private:


public:
    Pile();
    ~Pile();

    bool verifier_pile_vide();
    void Ajouter_a_la_pile (stack<int> st, double element);
    double lire_premier_elements_pile (stack<double> pile_locale);
    //double lire_deuxiemme_elements_pile (stack<double> pile_locale);
    void supprimer_premier_elements_pile (stack<double> pile_locale);
};