/* 
 * Projet POO - Calculatrice
 * BORIES - JORE - MARTINEZ - PHILIP
 */

#include "framePrincipale.hpp"
#include <iostream>

using namespace std;

BEGIN_EVENT_TABLE(MyFrame, wxFrame)
    EVT_BUTTON(ID_BTN_QUIT, MyFrame::OnBtnQuitClicked)
    EVT_BUTTON(ID_BTN_0, MyFrame::OnBtn0Clicked)
    EVT_BUTTON(ID_BTN_1, MyFrame::OnBtn1Clicked)
    EVT_BUTTON(ID_BTN_2, MyFrame::OnBtn2Clicked)
    EVT_BUTTON(ID_BTN_3, MyFrame::OnBtn3Clicked)
    EVT_BUTTON(ID_BTN_4, MyFrame::OnBtn4Clicked)
    EVT_BUTTON(ID_BTN_5, MyFrame::OnBtn5Clicked)
    EVT_BUTTON(ID_BTN_6, MyFrame::OnBtn6Clicked)
    EVT_BUTTON(ID_BTN_7, MyFrame::OnBtn7Clicked)
    EVT_BUTTON(ID_BTN_8, MyFrame::OnBtn8Clicked)
    EVT_BUTTON(ID_BTN_9, MyFrame::OnBtn9Clicked)
    EVT_BUTTON(ID_BTN_ENTRER, MyFrame::OnBtnEntrerClicked)
    EVT_BUTTON(ID_BTN_POINT, MyFrame::OnBtnPointClicked)
    EVT_BUTTON(ID_BTN_POURCENT, MyFrame::OnBtnPourcentClicked)
    EVT_BUTTON(ID_BTN_DIVISER, MyFrame::OnBtnDiviserClicked)
    EVT_BUTTON(ID_BTN_MULTIPLIER, MyFrame::OnBtnMultiplierClicked)
    EVT_BUTTON(ID_BTN_SOUSTRAIRE, MyFrame::OnBtnSoustraireClicked)
    EVT_BUTTON(ID_BTN_ADDITIONNER, MyFrame::OnBtnAdditionnerClicked)
    EVT_BUTTON(ID_BTN_D1, MyFrame::OnBtnD1Clicked)
    EVT_BUTTON(ID_BTN_C1, MyFrame::OnBtnC1Clicked)
    EVT_BUTTON(ID_BTN_PUISSANCE, MyFrame::OnBtnPuissanceClicked)
    EVT_BUTTON(ID_BTN_MPLUS, MyFrame::OnBtnMPlusClicked)
    EVT_BUTTON(ID_BTN_MR, MyFrame::OnBtnMRClicked)
    EVT_BUTTON(ID_BTN_MC, MyFrame::OnBtnMCClicked)
    EVT_BUTTON(ID_BTN_TEST, MyFrame::OnBtnTestClicked)
    EVT_BUTTON(ID_BTN_TEST2, MyFrame::OnBtnTest2Clicked)
END_EVENT_TABLE()


//Constructeur
MyFrame::MyFrame(const wxString& title) : wxFrame(NULL, wxID_ANY, title, wxPoint(400, 100), wxSize(270, 220)){   
    
    sizer = new wxBoxSizer(wxVERTICAL);

    //Menu
    wxMenu *m_pHelpMenu = new wxMenu();
    wxMenuBar *m_pMenuBar = new wxMenuBar();
    m_pHelpMenu->Append(wxID_ABOUT, _T("&About"));
    m_pMenuBar->Append(m_pHelpMenu, _T("&Help"));
    SetMenuBar(m_pMenuBar);
 
    //Zone d'affihage du texte
    //display = new wxTextCtrl(this, -1, wxT(""), wxPoint(-1, -1), wxSize(-1, -1), wxTE_RIGHT);
    //avec plusieurs lignes
    display = new wxTextCtrl(this, -1, _T(""), wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE | wxTE_READONLY);
    
    sizer->Add(display, 0, wxALL | wxEXPAND, 5);

    //Grille de 4 lignes et 6 colonnes
    grille = new wxGridSizer(4, 6, 3, 3);

    //Creation des boutons
    bouton0=new wxButton(this, ID_BTN_0, wxT("0"));
    bouton1=new wxButton(this, ID_BTN_1, wxT("1"));
    bouton2=new wxButton(this, ID_BTN_2, wxT("2"));
    bouton3=new wxButton(this, ID_BTN_3, wxT("3"));
    bouton4=new wxButton(this, ID_BTN_4, wxT("4"));
    bouton5=new wxButton(this, ID_BTN_5, wxT("5"));
    bouton6=new wxButton(this, ID_BTN_6, wxT("6"));
    bouton7=new wxButton(this, ID_BTN_7, wxT("7"));
    bouton8=new wxButton(this, ID_BTN_8, wxT("8"));
    bouton9=new wxButton(this, ID_BTN_9, wxT("9"));
    boutonDiviser=new wxButton(this, ID_BTN_DIVISER, wxT("/"));
    boutonMultiplier=new wxButton(this, ID_BTN_MULTIPLIER, wxT("x"));
    boutonSoustraire=new wxButton(this, ID_BTN_SOUSTRAIRE, wxT("-"));
    boutonPuissance=new wxButton(this, ID_BTN_PUISSANCE, wxT("^2"));
    boutonPoint=new wxButton(this, ID_BTN_POINT, wxT("."));
    boutonPourcent=new wxButton(this, ID_BTN_POURCENT, wxT("%"));
    boutonAdditionner=new wxButton(this, ID_BTN_ADDITIONNER, wxT("+"));
    boutonD1=new wxButton(this, ID_BTN_D1, wxT("D1"));
    boutonMPlus=new wxButton(this, ID_BTN_MPLUS, wxT("M+"));
    boutonC1=new wxButton(this, ID_BTN_C1, wxT("C1"));
    boutonMR=new wxButton(this, ID_BTN_MR, wxT("MR"));
    boutonMC=new wxButton(this, ID_BTN_MC, wxT("MC"));
    boutonTest=new wxButton(this, ID_BTN_TEST, wxT("test"));
    boutonTest2=new wxButton(this, ID_BTN_TEST2, wxT("test2"));

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
    boutonEntrer = new wxButton(this, ID_BTN_ENTRER, wxT("ENTER"), wxPoint(-1, -1), wxSize(170, 30), wxTE_LEFT);
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

void MyFrame::OnBtn0Clicked(wxCommandEvent &event){
    (*display) << "0";
}

void MyFrame::OnBtn1Clicked(wxCommandEvent &event){
    (*display) << "1";
}

void MyFrame::OnBtn2Clicked(wxCommandEvent &event){
    (*display) << "2";
}

void MyFrame::OnBtn3Clicked(wxCommandEvent &event){
    (*display) << "3";
}

void MyFrame::OnBtn4Clicked(wxCommandEvent &event){
    (*display) << "4";
}

void MyFrame::OnBtn5Clicked(wxCommandEvent &event){
    (*display) << "5";
}

void MyFrame::OnBtn6Clicked(wxCommandEvent &event){
    (*display) << "6";
}

void MyFrame::OnBtn7Clicked(wxCommandEvent &event){
    (*display) << "7";
}

void MyFrame::OnBtn8Clicked(wxCommandEvent &event){
    (*display) << "8";
}

void MyFrame::OnBtn9Clicked(wxCommandEvent &event){
    (*display) << "9";
}

void MyFrame::OnBtnEntrerClicked(wxCommandEvent &event){
    (*display) << "\n";
}

void MyFrame::OnBtnPointClicked(wxCommandEvent &event){
    (*display) << ".";
}

void MyFrame::OnBtnPourcentClicked(wxCommandEvent &event){

}

void MyFrame::OnBtnDiviserClicked(wxCommandEvent &event){

}

void MyFrame::OnBtnMultiplierClicked(wxCommandEvent &event){

}

void MyFrame::OnBtnSoustraireClicked(wxCommandEvent &event){

}

void MyFrame::OnBtnAdditionnerClicked(wxCommandEvent &event){

}
void MyFrame::OnBtnD1Clicked(wxCommandEvent &event){

}
void MyFrame::OnBtnC1Clicked(wxCommandEvent &event){

}
void MyFrame::OnBtnPuissanceClicked(wxCommandEvent &event){

}
void MyFrame::OnBtnMPlusClicked(wxCommandEvent &event){

}
void MyFrame::OnBtnMRClicked(wxCommandEvent &event){

}
void MyFrame::OnBtnMCClicked(wxCommandEvent &event){

}
void MyFrame::OnBtnTestClicked(wxCommandEvent &event){

}
void MyFrame::OnBtnTest2Clicked(wxCommandEvent &event){

}