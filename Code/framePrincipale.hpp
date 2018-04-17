/* 
 * Projet POO - Calculatrice
 * BORIES - JORE - MARTINEZ - PHILIP
 */

// Un petit "Guard-Block" afin d'éviter les inclusions multiples
#ifndef MAINFRAME_H_INCLUDED
#define MAINFRAME_H_INCLUDED

#include <wx/wx.h>
#include "pile.hpp"
#include "mathFonction.hpp"

enum
{
    ID_BTN_QUIT = wxID_HIGHEST + 1,
    ID_BTN_0,
    ID_BTN_1,
    ID_BTN_2,
    ID_BTN_3,
    ID_BTN_4,
    ID_BTN_5,
    ID_BTN_6,
    ID_BTN_7,
    ID_BTN_8,
    ID_BTN_9,
    ID_BTN_ENTRER,
    ID_BTN_POINT,
    ID_BTN_POURCENT,
    ID_BTN_DIVISER,
    ID_BTN_MULTIPLIER,
    ID_BTN_SOUSTRAIRE,
    ID_BTN_ADDITIONNER,
    ID_BTN_D1,
    ID_BTN_C1,
    ID_BTN_CARRE,
    ID_BTN_MPLUS,
	ID_BTN_MMoins,
    ID_BTN_MR,
    ID_BTN_MC,
    ID_BTN_TEST,
    ID_BTN_TEST2
};


class MyFrame : public wxFrame
{
	public:
    	MyFrame(const wxString& title);
       // virtual ~MainFrame(); //destructeur

    protected : 
        Pile *pileCalculatrice;
        long tailleTexte=0;
        double debut=0;
        double fin=0;
        int tailleDerniereLigne;
        int tailleAvantDerniereLigne;

        wxBoxSizer *sizer;
        wxGridSizer *grille;
        wxTextCtrl *display;
        wxButton *bouton0, *bouton1, *bouton2, *bouton3, *bouton4, *bouton5, *bouton6, *bouton7, *bouton8, *bouton9;
        wxButton *boutonDiviser, *boutonMultiplier, *boutonAdditionner, *boutonSoustraire, *boutonPourcent, *boutonCarre;
        wxButton *boutonPoint, *boutonD1, *boutonC1, *boutonMPlus, *boutonMMoins, *boutonMR, *boutonMC;
        wxButton *boutonTest, *boutonTest2;
        wxButton *boutonEntrer;

        // Méthodes évènementielles
        void OnBtnQuitClicked(wxCommandEvent &event);
        void OnBtn0Clicked(wxCommandEvent &event);
        void OnBtn1Clicked(wxCommandEvent &event);
        void OnBtn2Clicked(wxCommandEvent &event);
        void OnBtn3Clicked(wxCommandEvent &event);
        void OnBtn4Clicked(wxCommandEvent &event);
        void OnBtn5Clicked(wxCommandEvent &event);
        void OnBtn6Clicked(wxCommandEvent &event);
        void OnBtn7Clicked(wxCommandEvent &event);
        void OnBtn8Clicked(wxCommandEvent &event);
        void OnBtn9Clicked(wxCommandEvent &event);
        void OnBtnEntrerClicked(wxCommandEvent &event);
        void OnBtnPointClicked(wxCommandEvent &event);
        void OnBtnPourcentClicked(wxCommandEvent &event);
        void OnBtnDiviserClicked(wxCommandEvent &event);
        void OnBtnMultiplierClicked(wxCommandEvent &event);
        void OnBtnSoustraireClicked(wxCommandEvent &event);
        void OnBtnAdditionnerClicked(wxCommandEvent &event);
        void OnBtnD1Clicked(wxCommandEvent &event);
        void OnBtnC1Clicked(wxCommandEvent &event);
        void OnBtnCarreClicked(wxCommandEvent &event);
        void OnBtnMPlusClicked(wxCommandEvent &event);
	    void OnBtnMMoinsClicked(wxCommandEvent &event);
        void OnBtnMRClicked(wxCommandEvent &event);
        void OnBtnMCClicked(wxCommandEvent &event);
        void OnBtnTestClicked(wxCommandEvent &event);
        void OnBtnTest2Clicked(wxCommandEvent &event);

        //Méthodes de suppresion de ligne dans le Display
        void supprimer1Ligne();
        void supprimer2Lignes();


         // Déclaration de la table des évènements
        DECLARE_EVENT_TABLE()
};


#endif 

