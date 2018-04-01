/* 
 * Projet POO - Calculatrice
 * BORIES - JORE - MARTINEZ - PHILIP
 */

// Un petit "Guard-Block" afin d'éviter les inclusions multiples
#ifndef MAINFRAME_H_INCLUDED
#define MAINFRAME_H_INCLUDED

#include <wx/wx.h>

enum
{
    ID_BTN_QUIT = wxID_HIGHEST + 1
};


class MyFrame : public wxFrame
{
	public:
    	MyFrame(const wxString& title);
       // virtual ~MainFrame(); //destructeur

    protected : 
        wxBoxSizer *sizer;
        wxGridSizer *grille;
        wxTextCtrl *display;
        wxButton *bouton0, *bouton1, *bouton2, *bouton3, *bouton4, *bouton5, *bouton6, *bouton7, *bouton8, *bouton9;
        wxButton *boutonDiviser, *boutonMultiplier, *boutonAdditionner, *boutonSoustraire, *boutonPourcent, *boutonPuissance;
        wxButton *boutonPoint, *boutonD1, *boutonC1, *boutonMPlus, *boutonMR, *boutonMC;
        wxButton *boutonTest, *boutonTest2;
        wxButton *boutonEntrer;

        // Méthodes évènementielles
        void OnBtnQuitClicked(wxCommandEvent &event);
        void OnBtnEurosClicked(wxCommandEvent &event);
         // Déclaration de la table des évènements
        DECLARE_EVENT_TABLE()
};


#endif 

