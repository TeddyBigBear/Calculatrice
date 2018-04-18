/* 
 * Projet POO - Calculatrice
 * BORIES - JORE - MARTINEZ - PHILIP
 */

#include "Calculatrice.hpp"
#include <iostream>

using namespace std;

// Macro pour rediriger l'exécution vers notre classe
IMPLEMENT_APP(MyApp);

#include "framePrincipale.hpp"

bool MyApp::OnInit()
{
    //creation de la frame
    MyFrame *frm=new MyFrame(_T("Calculatrice"));
    frm->Show();

    // On retourne true pour que le programme ne se termine pas immédiatement
    return true;
}

