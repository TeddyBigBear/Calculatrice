/* 
gestion_evnts.hpp
Projet Calculatrice / Groupe : JORE - BORIES - MARTINEZ - PHILIP 
Date de creation : 02/04/2018
*/


#include <stack>

using namespace std;

class gestion_evnts
{

  private:
    stack<double> pile_locale;

  public:
    //constructor - destructor
    gestion_evnts();
    ~gestion_evnts();

    //Boutons maths
    static string boutonAdditionner();
    static string boutonSoustraire();
    static string boutonMultiplier();
    static string boutonDiviser();
    static string boutonPourcent();
    static string boutonPuissance();

    //Boutons Memoire
    static string boutonMPlus();
    static string bouton MMoins();
    static string boutonMRC();
    static string boutonMC();

    //Boutons Test
    static string boutonTest();
    static string boutonTest2();
}
