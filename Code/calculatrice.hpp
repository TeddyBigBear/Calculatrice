/* 
 * Projet POO - Calculatrice
 * BORIES - JORE - MARTINEZ - PHILIP
 */

// Un petit "Guard-Block" afin d'éviter les inclusions multiples
#ifndef MYAPP_H_INCLUDED
#define MYAPP_H_INCLUDED

#include <wx/wx.h>


//Classe dérivée de wxApp
// on a accès à toutes les methodes public et protected (mais pas privé)
class MyApp : public wxApp
{
    public:
        virtual bool OnInit(); //virtual ca peut etre redefinie dans les classes filles
};

//classe principale
DECLARE_APP(MyApp);

#endif //MYAPP_H_INCLUDED

