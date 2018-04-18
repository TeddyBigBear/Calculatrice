/* 
 * Projet POO - Calculatrice
 * BORIES - JORE - MARTINEZ - PHILIP
 */

#include "FramePrincipale.hpp"
#include <iostream>
//#include "pile.hpp"


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
    EVT_BUTTON(ID_BTN_PUISSANCE, MyFrame::OnBtnPuissanceClicked)
    EVT_BUTTON(ID_BTN_10_PUISSANCE, MyFrame::OnBtn10PuissanceClicked)
    EVT_BUTTON(ID_BTN_RACINE, MyFrame::OnBtnRacineClicked)
    EVT_BUTTON(ID_BTN_CUBE, MyFrame::OnBtnCubeClicked)
    EVT_BUTTON(ID_BTN_EXPO, MyFrame::OnBtnExpoClicked)
    EVT_BUTTON(ID_BTN_LN, MyFrame::OnBtnLnClicked)
    EVT_BUTTON(ID_BTN_LOG, MyFrame::OnBtnLogClicked)
    EVT_BUTTON(ID_BTN_DELETE, MyFrame::OnBtnDeleteClicked)
    EVT_BUTTON(ID_BTN_CLEAR, MyFrame::OnBtnClearClicked)
    EVT_BUTTON(ID_BTN_CARRE, MyFrame::OnBtnCarreClicked)
    EVT_BUTTON(ID_BTN_MPLUS, MyFrame::OnBtnMPlusClicked)
	EVT_BUTTON(ID_BTN_MMOINS, MyFrame::OnBtnMMoinsClicked)
    EVT_BUTTON(ID_BTN_MR, MyFrame::OnBtnMRClicked)
    EVT_BUTTON(ID_BTN_MC, MyFrame::OnBtnMCClicked)
END_EVENT_TABLE()


//Constructeur
MyFrame::MyFrame(const wxString& title) : wxFrame(NULL, wxID_ANY, title, wxPoint(400, 100), wxSize(330, 220)){   
    
    sizer = new wxBoxSizer(wxVERTICAL);
 
    //Zone d'affihage du texte avec plusieurs lignes
    display = new wxTextCtrl(this, -1, _T(""), wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE | wxTE_READONLY);
    
    sizer->Add(display, 0, wxALL | wxEXPAND, 5);

    //Grille de 4 lignes et 7 colonnes
    grille = new wxGridSizer(4, 7, 3, 3);

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
    boutonCarre=new wxButton(this, ID_BTN_CARRE, wxT("^2"));
    boutonPuissance=new wxButton(this, ID_BTN_PUISSANCE, wxT("^"));
    bouton10Puissance=new wxButton(this, ID_BTN_10_PUISSANCE, wxT("10^"));
    boutonRacine=new wxButton(this, ID_BTN_RACINE, wxT("√"));
    boutonCube=new wxButton(this, ID_BTN_CUBE, wxT("^3"));
    boutonExpo=new wxButton(this, ID_BTN_EXPO, wxT("e^"));
    boutonLn=new wxButton(this, ID_BTN_LN, wxT("ln"));
    boutonLog=new wxButton(this, ID_BTN_LOG, wxT("log"));
    boutonPoint=new wxButton(this, ID_BTN_POINT, wxT("."));
    boutonPourcent=new wxButton(this, ID_BTN_POURCENT, wxT("%"));
    boutonAdditionner=new wxButton(this, ID_BTN_ADDITIONNER, wxT("+"));
    boutonDelete=new wxButton(this, ID_BTN_DELETE, wxT("<---"));
    boutonMPlus=new wxButton(this, ID_BTN_MPLUS, wxT("M+"));
	boutonMMoins=new wxButton(this, ID_BTN_MMOINS, wxT("M-"));
    boutonClear=new wxButton(this, ID_BTN_CLEAR, wxT("Clr"));
    boutonMR=new wxButton(this, ID_BTN_MR, wxT("MR"));
    boutonMC=new wxButton(this, ID_BTN_MC, wxT("MC"));
    boutonEntrer=new wxButton(this, ID_BTN_ENTRER, wxT("Entrer"));

    //Couleur des boutons
    wxColour *couleurBleuClair= new wxColour(218,244,251);
    wxColour *couleurBleu= new wxColour(236,240,251);
    wxColour *couleurBleuFonce= new wxColour(218,227,251);
    wxColour *couleurOrange= new wxColour(254,214,192);
    wxColour *couleurOrangeClair= new wxColour(250,235,226);
    boutonDiviser->SetBackgroundColour(*couleurBleuClair);
    boutonMultiplier->SetBackgroundColour(*couleurBleuClair);
    boutonSoustraire->SetBackgroundColour(*couleurBleuClair);
    boutonPourcent->SetBackgroundColour(*couleurBleuClair);
    boutonAdditionner->SetBackgroundColour(*couleurBleuClair);
    boutonPuissance->SetBackgroundColour(*couleurBleu);
    bouton10Puissance->SetBackgroundColour(*couleurBleu);
    boutonRacine->SetBackgroundColour(*couleurBleu);
    boutonCube->SetBackgroundColour(*couleurBleu);
    boutonExpo->SetBackgroundColour(*couleurBleu);
    boutonLn->SetBackgroundColour(*couleurBleu);
    boutonLog->SetBackgroundColour(*couleurBleu);
    boutonCarre->SetBackgroundColour(*couleurBleu);
    boutonMPlus->SetBackgroundColour(*couleurBleuFonce);
	boutonMMoins->SetBackgroundColour(*couleurBleuFonce);
    boutonMR->SetBackgroundColour(*couleurBleuFonce);
    boutonMC->SetBackgroundColour(*couleurBleuFonce);
    boutonClear->SetBackgroundColour(*couleurOrangeClair);
    boutonDelete->SetBackgroundColour(*couleurOrangeClair);
    boutonEntrer->SetBackgroundColour(*couleurOrange);

    //Ajout des boutons à la grille
    //1ere ligne
    grille->Add(bouton7, 0, wxEXPAND); 
    grille->Add(bouton8, 0, wxEXPAND);
    grille->Add(bouton9, 0, wxEXPAND);
    grille->Add(boutonDiviser, 0, wxEXPAND);
    grille->Add(bouton10Puissance, 0, wxEXPAND);
    grille->Add(boutonExpo, 0, wxEXPAND);
    grille->Add(boutonMPlus, 0, wxEXPAND);
    //2eme ligne
    grille->Add(bouton4, 0, wxEXPAND);
    grille->Add(bouton5, 0, wxEXPAND);
    grille->Add(bouton6, 0, wxEXPAND);
    grille->Add(boutonMultiplier, 0, wxEXPAND);
    grille->Add(boutonCube, 0, wxEXPAND);
    grille->Add(boutonLn, 0, wxEXPAND);
    grille->Add(boutonMR, 0, wxEXPAND);
    //3eme ligne
    grille->Add(bouton1, 0, wxEXPAND);
    grille->Add(bouton2, 0, wxEXPAND);
    grille->Add(bouton3, 0, wxEXPAND);
    grille->Add(boutonSoustraire, 0, wxEXPAND);
    grille->Add(boutonCarre, 0, wxEXPAND);
    grille->Add(boutonLog, 0, wxEXPAND);
    grille->Add(boutonMC, 0, wxEXPAND);
    //4eme ligne
    grille->Add(bouton0, 0, wxEXPAND);
    grille->Add(boutonPoint, 0, wxEXPAND);
    grille->Add(boutonPourcent, 0, wxEXPAND);
    grille->Add(boutonAdditionner, 0, wxEXPAND);
    grille->Add(boutonPuissance, 0, wxEXPAND);
    grille->Add(boutonRacine, 0, wxEXPAND);
    grille->Add(boutonMMoins, 0, wxEXPAND);

    //Ajout de la grille au sizer
    sizer->Add(grille, 5, wxALL | wxEXPAND, 5);

    //Grille et sous grille pour les touche entrées, clear et delete
    grilleEntree = new wxGridSizer(1, 2, 3, 3);
    sousGrille = new wxGridSizer(1, 2, 3, 3);
    grilleEntree->Add(boutonEntrer, 0, wxEXPAND);
    sousGrille->Add(boutonDelete, 0, wxEXPAND);
    sousGrille->Add(boutonClear, 0, wxEXPAND);
    grilleEntree->Add(sousGrille, 0, wxEXPAND);

    //sizer->Add(boutonEntrer, 0, wxLEFT | wxBOTTOM, 5);
    sizer->Add(grilleEntree, 5, wxALL | wxEXPAND, 5);

    SetSizer(sizer);
    SetMinSize(wxSize(270, 220));
    Centre();

    //Création de la pile de base
    pileCalculatrice = new Pile();
}

//Fonctions pour gerer les evenements
void MyFrame::OnBtnQuitClicked(wxCommandEvent &event){
	 int reponse = wxMessageBox(_T("Quitter le convertisseur ?"),
                               _T("Confirmation"), // Titre de la boite de message
                               wxYES_NO | wxICON_QUESTION); // Style

    if (reponse == wxYES) // Si la réponse est positive,   
    	Close();
}

//*************CHIFFRES*************
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

void MyFrame::OnBtnPointClicked(wxCommandEvent &event){
    (*display) << ".";
}

//*************ENTRER DELETE CLEAR*************
void MyFrame::OnBtnEntrerClicked(wxCommandEvent &event){
    wxString strValue = display->GetLineText(display->GetNumberOfLines()-1);
    double element = atof(strValue);

    if (element != 0){
        wxString strValue = display->GetLineText(display->GetNumberOfLines()-1);
        double element = atof(strValue);
        pileCalculatrice->_myPile.push(element);

        this->tailleTexte += strValue.size() + 1; //+1 correspond au saut à la ligne

        (*display) << "\n";
    }
}

void MyFrame::OnBtnDeleteClicked(wxCommandEvent &event){
    //TODO
}
void MyFrame::OnBtnClearClicked(wxCommandEvent &event){
    //TODO
}

//*************FONCTIONS MATHEMATIQUES*************
void MyFrame::OnBtnPourcentClicked(wxCommandEvent &event){
    if (pileCalculatrice->_myPile.size() > 1)
    {
        //on recupère les deux premiers elements de la pile
        pileCalculatrice->element1 = pileCalculatrice->recuperer();
        pileCalculatrice->element2 = pileCalculatrice->recuperer();

        //on supprime les 2 lignes correspondantes
        supprimer2Lignes();

        //on fait le pourcentage de l'élément 1 sur l'élément 2 et on met le resultat dans la pile
        pileCalculatrice->resultatOperation = MathFonction::Pourcentage(pileCalculatrice->element2, pileCalculatrice->element1);//Element2 avant element1 pour garder le bon ordre d'opérande
        pileCalculatrice->ajouter(pileCalculatrice->resultatOperation);
        //on affiche le résultat
        afficherResultat();
    }
}

void MyFrame::OnBtnDiviserClicked(wxCommandEvent &event){
    if (pileCalculatrice->_myPile.size() > 1)
    {
        //on recupère les deux premiers elements de la pile
        pileCalculatrice->element1 = pileCalculatrice->recuperer();
        pileCalculatrice->element2 = pileCalculatrice->recuperer();

        //on supprime les 2 lignes correspondantes
        supprimer2Lignes();

        //on les divise et on met le resultat dans la pile
        double resultat = MathFonction::Diviser(pileCalculatrice->element2, pileCalculatrice->element1);//Element2 avant element1 pour garder le bon ordre d'opérande
        pileCalculatrice->ajouter(pileCalculatrice->resultatOperation);
        //on affiche le résultat
        afficherResultat();
    }
}

void MyFrame::OnBtnMultiplierClicked(wxCommandEvent &event){
    if (pileCalculatrice->_myPile.size() > 1)
    {
        //on recupère les deux premiers elements de la pile
        pileCalculatrice->element1 = pileCalculatrice->recuperer();
        pileCalculatrice->element2 = pileCalculatrice->recuperer();

        //on supprime les 2 lignes correspondantes
        supprimer2Lignes();

        //on les multiplie et on met le resultat dans la pile
        pileCalculatrice->resultatOperation = MathFonction::Multiplier(pileCalculatrice->element2, pileCalculatrice->element1);//Element2 avant element1 pour garder le bon ordre d'opérande
        pileCalculatrice->ajouter(pileCalculatrice->resultatOperation);
        //on affiche le résultat
        afficherResultat();
    }
}

void MyFrame::OnBtnSoustraireClicked(wxCommandEvent &event){
    if (pileCalculatrice->_myPile.size() > 1)
    {
        //on recupère les deux premiers elements de la pile
        pileCalculatrice->element1 = pileCalculatrice->recuperer();
        pileCalculatrice->element2 = pileCalculatrice->recuperer();

        //on supprime les 2 lignes correspondantes
        supprimer2Lignes();

        //on les soustrait et on met le resultat dans la pile
        pileCalculatrice->resultatOperation = MathFonction::Soustraire(pileCalculatrice->element2, pileCalculatrice->element1); //Element2 avant element1 pour garder le bon ordre d'opérande
        pileCalculatrice->ajouter(pileCalculatrice->resultatOperation);
        //on affiche le résultat
        afficherResultat();
    }
}

void MyFrame::OnBtnAdditionnerClicked(wxCommandEvent &event){
    if (pileCalculatrice->_myPile.size() > 1)
    {
         //on recupère les deux premiers elements de la pile
        pileCalculatrice->element1 = pileCalculatrice->recuperer();
        pileCalculatrice->element2 = pileCalculatrice->recuperer();

        //on supprime les 2 lignes correspondantes
        supprimer2Lignes();

        //on les additionne et on met le resultat dans la pile
        pileCalculatrice->resultatOperation = MathFonction::Additionner(pileCalculatrice->element2, pileCalculatrice->element1);//Element2 avant element1 pour garder le bon ordre d'opérande
        pileCalculatrice->ajouter(pileCalculatrice->resultatOperation);
        
        //on affiche le résultat
        afficherResultat();
    }
}

void MyFrame::OnBtnPuissanceClicked(wxCommandEvent &event){
    if (pileCalculatrice->_myPile.size() > 1){
      //on recupère les deux premiers elements de la pile
        pileCalculatrice->element1 = pileCalculatrice->recuperer();
        pileCalculatrice->element2 = pileCalculatrice->recuperer();

        supprimer2Lignes();

        //on met élément2 à la puissance d'élément1 et on met le resultat dans la pile
        pileCalculatrice->resultatOperation = MathFonction::Puissance(pileCalculatrice->element2, pileCalculatrice->element1);//Element2 avant element1 pour garder le bon ordre d'opérande
        pileCalculatrice->ajouter(pileCalculatrice->resultatOperation);
        
        //on affiche le résultat
        afficherResultat();
    }
}

void MyFrame::OnBtnCarreClicked(wxCommandEvent &event){
    if (pileCalculatrice->_myPile.size() > 1)
    {
        //on recupère le premier element de la pile
        pileCalculatrice->element1 = pileCalculatrice->recuperer();

        //on supprime la dernière ligne
        supprimer1Ligne();

        //on met au carré et on met le resultat dans la pile
        pileCalculatrice->resultatOperation = MathFonction::Carre(pileCalculatrice->element1);
        pileCalculatrice->ajouter(pileCalculatrice->resultatOperation);
        
        //on affiche le résultat
        afficherResultat();
    }
}

void MyFrame::OnBtn10PuissanceClicked(wxCommandEvent &event){
    //TODO
}

void MyFrame::OnBtnRacineClicked(wxCommandEvent &event){
    //TODO
}

void MyFrame::OnBtnCubeClicked(wxCommandEvent &event){
    //TODO
}

void MyFrame::OnBtnExpoClicked(wxCommandEvent &event){
    //TODO
}

void MyFrame::OnBtnLnClicked(wxCommandEvent &event){
    //TODO
}

void MyFrame::OnBtnLogClicked(wxCommandEvent &event){
    //TODO
}


//*************FONCTIONS MEMOIRE*************
void MyFrame::OnBtnMPlusClicked(wxCommandEvent &event){
    //TODO AXEL
}
void MyFrame::OnBtnMMoinsClicked(wxCommandEvent &event){
    //TODO AXEL
}
void MyFrame::OnBtnMRClicked(wxCommandEvent &event){
    //TODO AXEL
}
void MyFrame::OnBtnMCClicked(wxCommandEvent &event){
    //TODO AXEL
}

//*************AUTRES*************
void MyFrame::supprimer1Ligne(){
    this->tailleDerniereLigne = display->GetLineLength(display->GetNumberOfLines()-2) +1; //+1 pour le saut à la ligne et -2 pour les 2 "\n"        int tailleAvantDerniereLigne = display->GetLineLength(display->GetNumberOfLines()-3) +1; //+1 pour le saut à la ligne
    
    this->debut = this->tailleTexte - this->tailleDerniereLigne;
    this->fin = this->tailleTexte;

    display->Remove(this->debut, this->fin);
}

void MyFrame::supprimer2Lignes(){
    this->tailleDerniereLigne = display->GetLineLength(display->GetNumberOfLines()-2) +1; //+1 pour le saut à la ligne
    this->tailleAvantDerniereLigne = display->GetLineLength(display->GetNumberOfLines()-3) +1; //+1 pour le saut à la ligne
    
    this->debut = this->tailleTexte - this->tailleDerniereLigne - this->tailleAvantDerniereLigne;
    this->fin = this->tailleTexte;

    display->Remove(this->debut, this->fin);
}

void MyFrame::afficherResultat(){
    (*display) << pileCalculatrice->resultatOperation << "\n";

    this->tailleDerniereLigne = display->GetLineLength(display->GetNumberOfLines()-2) +1; //+1 pour le saut à la ligne
    this->tailleTexte = this->tailleTexte - (this->fin - this->debut) + this->tailleDerniereLigne; //+1 = saut à la ligne
}
