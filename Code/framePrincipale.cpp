/* 
 * Projet POO - Calculatrice
 * BORIES - JORE - MARTINEZ - PHILIP
 */

#include "framePrincipale.hpp"
#include <iostream>

using namespace std;

BEGIN_EVENT_TABLE(MyFrame, wxFrame)
    EVT_BUTTON(ID_BTN_QUIT, MyFrame::OnBtnQuitClicked)
END_EVENT_TABLE()


//Constructeur
MyFrame::MyFrame(const wxString& title) : wxFrame(NULL, wxID_ANY, title, wxPoint(400, 100), wxSize(270, 220)){   
    
    sizer = new wxBoxSizer(wxVERTICAL);
 
    //Zone d'affihage du texte
    display = new wxTextCtrl(this, -1, wxT(""), wxPoint(-1, -1), wxSize(-1, -1), wxTE_RIGHT);
    sizer->Add(display, 0, wxALL | wxEXPAND, 5);

    //Grille de 4 lignes et 6 colonnes
    grille = new wxGridSizer(4, 6, 3, 3);

    //Creation des boutons
    bouton0=new wxButton(this, -1, wxT("0"));
    bouton1=new wxButton(this, -1, wxT("1"));
    bouton2=new wxButton(this, -1, wxT("2"));
    bouton3=new wxButton(this, -1, wxT("3"));
    bouton4=new wxButton(this, -1, wxT("4"));
    bouton5=new wxButton(this, -1, wxT("5"));
    bouton6=new wxButton(this, -1, wxT("6"));
    bouton7=new wxButton(this, -1, wxT("7"));
    bouton8=new wxButton(this, -1, wxT("8"));
    bouton9=new wxButton(this, -1, wxT("9"));
    boutonDiviser=new wxButton(this, -1, wxT("/"));
    boutonMultiplier=new wxButton(this, -1, wxT("x"));
    boutonSoustraire=new wxButton(this, -1, wxT("-"));
    boutonPuissance=new wxButton(this, -1, wxT("^2"));
    boutonPoint=new wxButton(this, -1, wxT("."));
    boutonPourcent=new wxButton(this, -1, wxT("%"));
    boutonAdditionner=new wxButton(this, -1, wxT("+"));
    boutonD1=new wxButton(this, -1, wxT("D1"));
    boutonMPlus=new wxButton(this, -1, wxT("M+"));
    boutonC1=new wxButton(this, -1, wxT("C1"));
    boutonMR=new wxButton(this, -1, wxT("MR"));
    boutonMC=new wxButton(this, -1, wxT("MC"));
    boutonTest=new wxButton(this, -1, wxT("test"));
    boutonTest2=new wxButton(this, -1, wxT("test2"));

    //Couleur des boutons
    wxColour *couleurBleuClair= new wxColour(218,244,251);
    wxColour *couleurBleuFonce= new wxColour(218,227,251);
    wxColour *couleurOrange= new wxColour(253,218,199);
    boutonDiviser->SetBackgroundColour(*couleurBleuClair);
    boutonMultiplier->SetBackgroundColour(*couleurBleuClair);
    boutonSoustraire->SetBackgroundColour(*couleurBleuClair);
    boutonPourcent->SetBackgroundColour(*couleurBleuClair);
    boutonAdditionner->SetBackgroundColour(*couleurBleuClair);
    boutonD1->SetBackgroundColour(*couleurBleuFonce);
    boutonMPlus->SetBackgroundColour(*couleurBleuFonce);
    boutonC1->SetBackgroundColour(*couleurBleuFonce);
    boutonMR->SetBackgroundColour(*couleurBleuFonce);
    boutonMC->SetBackgroundColour(*couleurBleuFonce);
    boutonPuissance->SetBackgroundColour(*couleurBleuFonce);

    //Ajout des boutons à la grille
    //1ere ligne
    grille->Add(bouton7, 0, wxEXPAND); 
    grille->Add(bouton8, 0, wxEXPAND);
    grille->Add(bouton9, 0, wxEXPAND);
    grille->Add(boutonDiviser, 0, wxEXPAND);
    grille->Add(boutonD1, 0, wxEXPAND);
    grille->Add(boutonMPlus, 0, wxEXPAND);
    //2eme ligne
    grille->Add(bouton4, 0, wxEXPAND);
    grille->Add(bouton5, 0, wxEXPAND);
    grille->Add(bouton6, 0, wxEXPAND);
    grille->Add(boutonMultiplier, 0, wxEXPAND);
    grille->Add(boutonC1, 0, wxEXPAND);
    grille->Add(boutonMR, 0, wxEXPAND);
    //3eme ligne
    grille->Add(bouton1, 0, wxEXPAND);
    grille->Add(bouton2, 0, wxEXPAND);
    grille->Add(bouton3, 0, wxEXPAND);
    grille->Add(boutonSoustraire, 0, wxEXPAND);
    grille->Add(boutonPuissance, 0, wxEXPAND);
    grille->Add(boutonMC, 0, wxEXPAND);
    //4eme ligne
    grille->Add(bouton0, 0, wxEXPAND);
    grille->Add(boutonPoint, 0, wxEXPAND);
    grille->Add(boutonPourcent, 0, wxEXPAND);
    grille->Add(boutonAdditionner, 0, wxEXPAND);
    grille->Add(boutonTest, 0, wxEXPAND);
    grille->Add(boutonTest2, 0, wxEXPAND);

    //Ajout de la grille au sizer
    sizer->Add(grille, 5, wxALL | wxEXPAND, 5);

    //Bouton "Enter"
    boutonEntrer = new wxButton(this, -1, wxT("ENTER"), wxPoint(-1, -1), wxSize(170, 30), wxTE_LEFT);
    boutonEntrer->SetBackgroundColour(*couleurOrange);
    
    sizer->Add(boutonEntrer, 0, wxLEFT | wxBOTTOM, 5);

    SetSizer(sizer);
    SetMinSize(wxSize(270, 220));
    Centre();
}

//Fonctions pour gerer les evenements
void MyFrame::OnBtnQuitClicked(wxCommandEvent &event){
	 int reponse = wxMessageBox(_T("Quitter le convertisseur ?"),
                               _T("Confirmation"), // Titre de la boite de message
                               wxYES_NO | wxICON_QUESTION); // Style

    if (reponse == wxYES) // Si la réponse est positive,   
    	Close();
}

void MyFrame::OnBtnEurosClicked(wxCommandEvent &event){


}
