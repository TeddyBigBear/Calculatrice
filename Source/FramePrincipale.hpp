/* 
 * Projet POO - Calculatrice
 * BORIES - JORE - MARTINEZ - PHILIP
 */

// Un petit "Guard-Block" afin d'éviter les inclusions multiples
#ifndef MAINFRAME_H_INCLUDED
#define MAINFRAME_H_INCLUDED

#include <wx/wx.h>
#include "Pile.hpp"
#include "MathFonction.hpp"

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
    ID_BTN_PUISSANCE,
    ID_BTN_10_PUISSANCE,
    ID_BTN_RACINE,
    ID_BTN_CUBE,
    ID_BTN_EXPO,
    ID_BTN_LN,
    ID_BTN_LOG,
    ID_BTN_DELETE,
    ID_BTN_CLEAR,
    ID_BTN_CARRE,
    ID_BTN_MPLUS,
	ID_BTN_MMOINS,
    ID_BTN_MR,
    ID_BTN_MC
};


class MyFrame : public wxFrame
{
	public:
    	MyFrame(const wxString& title);
       // virtual ~MainFrame(); //destructeur

    protected : 
        Pile *pileCalculatrice;
        long tailleTexte;
        double debut;
        double fin;
        int tailleDerniereLigne;
        int tailleAvantDerniereLigne;
        double memoire;


        wxBoxSizer *sizer;
        wxGridSizer *grille, *grilleEntree, *sousGrille;
        wxTextCtrl *display;
        wxButton *bouton0, *bouton1, *bouton2, *bouton3, *bouton4, *bouton5, *bouton6, *bouton7, *bouton8, *bouton9;
        wxButton *boutonDiviser, *boutonMultiplier, *boutonAdditionner, *boutonSoustraire, *boutonPourcent, *boutonPuissance, *boutonCarre, *bouton10Puissance;
        wxButton *boutonRacine, *boutonCube, *boutonExpo, *boutonLn, *boutonLog;
        wxButton *boutonPoint, *boutonDelete, *boutonClear, *boutonMPlus, *boutonMMoins, *boutonMR, *boutonMC;
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
        void OnBtnPuissanceClicked(wxCommandEvent &event);
        void OnBtn10PuissanceClicked(wxCommandEvent &event);
        void OnBtnRacineClicked(wxCommandEvent &event);
        void OnBtnCubeClicked(wxCommandEvent &event);
        void OnBtnExpoClicked(wxCommandEvent &event);
        void OnBtnLnClicked(wxCommandEvent &event);
        void OnBtnLogClicked(wxCommandEvent &event);
        void OnBtnDeleteClicked(wxCommandEvent &event);
        void OnBtnClearClicked(wxCommandEvent &event);
        void OnBtnCarreClicked(wxCommandEvent &event);
        void OnBtnMPlusClicked(wxCommandEvent &event);
	    void OnBtnMMoinsClicked(wxCommandEvent &event);
        void OnBtnMRClicked(wxCommandEvent &event);
        void OnBtnMCClicked(wxCommandEvent &event);

        //Méthodes de suppresion de ligne dans le Display
        void supprimer1Ligne();
        void supprimer2Lignes();

        //Méthode d'affichage dans le Display
        void afficherResultat();

         // Déclaration de la table des évènements
        DECLARE_EVENT_TABLE()
};


#endif 

