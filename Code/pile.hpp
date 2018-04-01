
using namespace std;
 
class Pile
{
private:


public:
    Pile();
    ~Pile();

    void Ajouter_a_la_pile (stack<int> st, int element);
    double lire_premier_elements_pile ();
    //double lire_deuxiemme_elements_pile ();
    void supprimer_premier_elements_pile ();
};