/* 
 * Projet POO - Calculatrice
 * BORIES - JORE - MARTINEZ - PHILIP
 */

#include "framePrincipale.hpp"
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
    EVT_BUTTON(ID_BTN_D1, MyFrame::OnBtnD1Clicked)
    EVT_BUTTON(ID_BTN_C1, MyFrame::OnBtnC1Clicked)
    EVT_BUTTON(ID_BTN_CARRE, MyFrame::OnBtnCarreClicked)
    EVT_BUTTON(ID_BTN_MPLUS, MyFrame::OnBtnMPlusClicked)
	EVT_BUTTON(ID_BTN_MMOINS, MyFrame::OnBtnMMoinsClicked)
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
    boutonCarre=new wxButton(this, ID_BTN_CARRE, wxT("^2"));
    boutonPoint=new wxButton(this, ID_BTN_POINT, wxT("."));
    boutonPourcent=new wxButton(this, ID_BTN_POURCENT, wxT("%"));
    boutonAdditionner=new wxButton(this, ID_BTN_ADDITIONNER, wxT("+"));
    boutonD1=new wxButton(this, ID_BTN_D1, wxT("D1"));
    boutonMPlus=new wxButton(this, ID_BTN_MPLUS, wxT("M+"));
	boutonMMoins=new wxButton(this, ID_BTN_MMOINS, wxT("M-"));
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
	boutonMMoins->SetBackgroundColour(*couleurBleuFonce);
    boutonC1->SetBackgroundColour(*couleurBleuFonce);
    boutonMR->SetBackgroundColour(*couleurBleuFonce);
    boutonMC->SetBackgroundColour(*couleurBleuFonce);
    boutonCarre->SetBackgroundColour(*couleurBleuFonce);

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
    grille->Add(boutonCarre, 0, wxEXPAND);
    grille->Add(boutonMC, 0, wxEXPAND);
    //4eme ligne
    grille->Add(bouton0, 0, wxEXPAND);
    grille->Add(boutonPoint, 0, wxEXPAND);
    grille->Add(boutonPourcent, 0, wxEXPAND);
    grille->Add(boutonAdditionner, 0, wxEXPAND);
    grille->Add(boutonTest, 0, wxEXPAND);
    grille->Add(boutonMMoins, 0, wxEXPAND);

    //Ajout de la grille au sizer
    sizer->Add(grille, 5, wxALL | wxEXPAND, 5);

    //Bouton "Enter"
    boutonEntrer = new wxButton(this, ID_BTN_ENTRER, wxT("ENTER"), wxPoint(-1, -1), wxSize(170, 30), wxTE_LEFT);
    boutonEntrer->SetBackgroundColour(*couleurOrange);
    
    sizer->Add(boutonEntrer, 0, wxLEFT | wxBOTTOM, 5);

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
    wxString strValue = display->GetLineText(display->GetNumberOfLines()-1);
    double element = atof(strValue);
    //if (display->GetValue()!=""){
    if (element != 0){
        //wxString strValue = display->GetValue();
        wxString strValue = display->GetLineText(display->GetNumberOfLines()-1);
        double element = atof(strValue);
        pileCalculatrice->_myPile.push(element);

        this->tailleTexte += strValue.size() + 1; //+1 correspond au saut à la ligne
        cout << "taille texte : " << this->tailleTexte << endl;

        (*display) << "\n";
        cout << "element ajouter dans la pile " << pileCalculatrice->_myPile.top() << endl;
        cout << "nb de ligne " << display->GetNumberOfLines() << endl;
    }
}

void MyFrame::OnBtnPointClicked(wxCommandEvent &event){
    (*display) << ".";
}

void MyFrame::OnBtnPourcentClicked(wxCommandEvent &event){
if (pileCalculatrice->_myPile.size() > 1)
    {
        //on recupère les deux premiers elements de la pile
        double element1 = pileCalculatrice->recuperer();
        double element2 = pileCalculatrice->recuperer();

        //on supprime les 2 lignes correspondantes
        //display->Remove(display->GetLineLength(display->GetNumberOfLines()-2),display->GetLineLength(display->GetNumberOfLines()));
        
        double debut, fin;

        int tailleDerniereLigne = display->GetLineLength(display->GetNumberOfLines()-2) +1; //+1 pour le saut à la ligne
        int tailleAvantDerniereLigne = display->GetLineLength(display->GetNumberOfLines()-3) +1; //+1 pour le saut à la ligne
        
        debut = this->tailleTexte - tailleDerniereLigne - tailleAvantDerniereLigne;
        fin = this->tailleTexte;
        cout << "debut : " << debut << endl;
        cout << "fin : " << fin << endl;

        display->Remove(debut, fin);


        //on fait le pourcentage de l'élément 1 sur l'élément 2 et on met le resultat dans la pile
        double resultat = MathFonction::pourcentage(element2, element1);//Element2 avant element1 pour garder le bon ordre d'opérande
        pileCalculatrice->ajouter(resultat);
        //on affiche le résultat
        (*display) << resultat << "\n";

        tailleDerniereLigne = display->GetLineLength(display->GetNumberOfLines()-2) +1; //+1 pour le saut à la ligne
       // cout << "resultat string : " << to_string(resultat) << endl;
        // cout << "taille resultat : " << display->GetLineLength(display->GetNumberOfLines()-2) << endl;
        this->tailleTexte = this->tailleTexte - (fin - debut) + tailleDerniereLigne; //+1 = saut à la ligne

        cout << "taille du texte : " << this->tailleTexte << endl;
    }
}

void MyFrame::OnBtnDiviserClicked(wxCommandEvent &event){
    if (pileCalculatrice->_myPile.size() > 1)
    {
        //on recupère les deux premiers elements de la pile
        double element1 = pileCalculatrice->recuperer();
        double element2 = pileCalculatrice->recuperer();

        //on supprime les 2 lignes correspondantes
        //display->Remove(display->GetLineLength(display->GetNumberOfLines()-2),display->GetLineLength(display->GetNumberOfLines()));
        
        double debut, fin;

        int tailleDerniereLigne = display->GetLineLength(display->GetNumberOfLines()-2) +1; //+1 pour le saut à la ligne
        int tailleAvantDerniereLigne = display->GetLineLength(display->GetNumberOfLines()-3) +1; //+1 pour le saut à la ligne
        
        debut = this->tailleTexte - tailleDerniereLigne - tailleAvantDerniereLigne;
        fin = this->tailleTexte;
        cout << "debut : " << debut << endl;
        cout << "fin : " << fin << endl;

        display->Remove(debut, fin);


        //on les divise et on met le resultat dans la pile
        double resultat = MathFonction::diviser(element2, element1);//Element2 avant element1 pour garder le bon ordre d'opérande
        pileCalculatrice->ajouter(resultat);
        //on affiche le résultat
        (*display) << resultat << "\n";

        tailleDerniereLigne = display->GetLineLength(display->GetNumberOfLines()-2) +1; //+1 pour le saut à la ligne
       // cout << "resultat string : " << to_string(resultat) << endl;
        // cout << "taille resultat : " << display->GetLineLength(display->GetNumberOfLines()-2) << endl;
        this->tailleTexte = this->tailleTexte - (fin - debut) + tailleDerniereLigne; //+1 = saut à la ligne


        cout << "taille du texte : " << this->tailleTexte << endl;
    }
}

void MyFrame::OnBtnMultiplierClicked(wxCommandEvent &event){
    if (pileCalculatrice->_myPile.size() > 1)
    {
        //on recupère les deux premiers elements de la pile
        double element1 = pileCalculatrice->recuperer();
        double element2 = pileCalculatrice->recuperer();

        //on supprime les 2 lignes correspondantes
        //display->Remove(display->GetLineLength(display->GetNumberOfLines()-2),display->GetLineLength(display->GetNumberOfLines()));
        
        double debut, fin;

        int tailleDerniereLigne = display->GetLineLength(display->GetNumberOfLines()-2) +1; //+1 pour le saut à la ligne
        int tailleAvantDerniereLigne = display->GetLineLength(display->GetNumberOfLines()-3) +1; //+1 pour le saut à la ligne
        
        debut = this->tailleTexte - tailleDerniereLigne - tailleAvantDerniereLigne;
        fin = this->tailleTexte;
        cout << "debut : " << debut << endl;
        cout << "fin : " << fin << endl;

        display->Remove(debut, fin);


        //on les multiplie et on met le resultat dans la pile
        double resultat = MathFonction::multiplier(element2, element1);//Element2 avant element1 pour garder le bon ordre d'opérande
        pileCalculatrice->ajouter(resultat);
        //on affiche le résultat
        (*display) << resultat << "\n";

        tailleDerniereLigne = display->GetLineLength(display->GetNumberOfLines()-2) +1; //+1 pour le saut à la ligne
       // cout << "resultat string : " << to_string(resultat) << endl;
        // cout << "taille resultat : " << display->GetLineLength(display->GetNumberOfLines()-2) << endl;
        this->tailleTexte = this->tailleTexte - (fin - debut) + tailleDerniereLigne; //+1 = saut à la ligne


        cout << "taille du texte : " << this->tailleTexte << endl;
    }
}

void MyFrame::OnBtnSoustraireClicked(wxCommandEvent &event){
    if (pileCalculatrice->_myPile.size() > 1)
    {
        //on recupère les deux premiers elements de la pile
        double element1 = pileCalculatrice->recuperer();
        double element2 = pileCalculatrice->recuperer();

        //on supprime les 2 lignes correspondantes
        //display->Remove(display->GetLineLength(display->GetNumberOfLines()-2),display->GetLineLength(display->GetNumberOfLines()));
        
        double debut, fin;

        int tailleDerniereLigne = display->GetLineLength(display->GetNumberOfLines()-2) +1; //+1 pour le saut à la ligne
        int tailleAvantDerniereLigne = display->GetLineLength(display->GetNumberOfLines()-3) +1; //+1 pour le saut à la ligne
        
        debut = this->tailleTexte - tailleDerniereLigne - tailleAvantDerniereLigne;
        fin = this->tailleTexte;
        cout << "debut : " << debut << endl;
        cout << "fin : " << fin << endl;

        display->Remove(debut, fin);


        //on les soustrait et on met le resultat dans la pile
        double resultat = MathFonction::soustraire(element2, element1); //Element2 avant element1 pour garder le bon ordre d'opérande
        pileCalculatrice->ajouter(resultat);
        //on affiche le résultat
        (*display) << resultat << "\n";

        tailleDerniereLigne = display->GetLineLength(display->GetNumberOfLines()-2) +1; //+1 pour le saut à la ligne
       // cout << "resultat string : " << to_string(resultat) << endl;
        // cout << "taille resultat : " << display->GetLineLength(display->GetNumberOfLines()-2) << endl;
        this->tailleTexte = this->tailleTexte - (fin - debut) + tailleDerniereLigne; //+1 = saut à la ligne


        cout << "taille du texte : " << this->tailleTexte << endl;
    }
}

void MyFrame::OnBtnAdditionnerClicked(wxCommandEvent &event){
    if (pileCalculatrice->_myPile.size() > 1)
    {
        //on recupère les deux premiers elements de la pile
        double element1 = pileCalculatrice->recuperer();
        double element2 = pileCalculatrice->recuperer();

        //on supprime les 2 lignes correspondantes
        //display->Remove(display->GetLineLength(display->GetNumberOfLines()-2),display->GetLineLength(display->GetNumberOfLines()));
        
        double debut, fin;

        int tailleDerniereLigne = display->GetLineLength(display->GetNumberOfLines()-2) +1; //+1 pour le saut à la ligne
        int tailleAvantDerniereLigne = display->GetLineLength(display->GetNumberOfLines()-3) +1; //+1 pour le saut à la ligne
        
        debut = this->tailleTexte - tailleDerniereLigne - tailleAvantDerniereLigne;
        fin = this->tailleTexte;
        cout << "debut : " << debut << endl;
        cout << "fin : " << fin << endl;

        display->Remove(debut, fin);


        //on les additionne et on met le resultat dans la pile
        double resultat = MathFonction::additioner(element2, element1);//Element2 avant element1 pour garder le bon ordre d'opérande
        pileCalculatrice->ajouter(resultat);
        //on affiche le résultat
        (*display) << resultat << "\n";

        tailleDerniereLigne = display->GetLineLength(display->GetNumberOfLines()-2) +1; //+1 pour le saut à la ligne
        // cout << "resultat string : " << to_string(resultat) << endl;
        // cout << "taille resultat : " << display->GetLineLength(display->GetNumberOfLines()-2) << endl;
        this->tailleTexte = this->tailleTexte - (fin - debut) + tailleDerniereLigne; //+1 = saut à la ligne


        cout << "taille du texte : " << this->tailleTexte << endl;
    }
}


void MyFrame::OnBtnD1Clicked(wxCommandEvent &event){

}
void MyFrame::OnBtnC1Clicked(wxCommandEvent &event){

}
void MyFrame::OnBtnCarreClicked(wxCommandEvent &event){
    if (pileCalculatrice->_myPile.size() > 1)
    {
        //on recupère le premier element de la pile
        double element1 = pileCalculatrice->recuperer();

        //on supprime la ligne correspondante
        
        double debut, fin;

        int tailleDerniereLigne = display->GetLineLength(display->GetNumberOfLines()-2) +1; //+1 pour le saut à la ligne et -2 pour les 2 "\n"        int tailleAvantDerniereLigne = display->GetLineLength(display->GetNumberOfLines()-3) +1; //+1 pour le saut à la ligne
        
        debut = this->tailleTexte - tailleDerniereLigne;
        fin = this->tailleTexte;
        cout << "debut : " << debut << endl;
        cout << "fin : " << fin << endl;

        display->Remove(debut, fin);


        //on les additionne et on met le resultat dans la pile
        double resultat = MathFonction::carre(element1);//Element2 avant element1 pour garder le bon ordre d'opérande
        pileCalculatrice->ajouter(resultat);
        //on affiche le résultat
        (*display) << resultat << "\n";

        tailleDerniereLigne = display->GetLineLength(display->GetNumberOfLines()-2) +1; //+1 pour le saut à la ligne
       // cout << "resultat string : " << to_string(resultat) << endl;
        // cout << "taille resultat : " << display->GetLineLength(display->GetNumberOfLines()-2) << endl;
        this->tailleTexte = this->tailleTexte - (fin - debut) + tailleDerniereLigne; //+1 = saut à la ligne


        cout << "taille du texte : " << this->tailleTexte << endl;
    }
}
void MyFrame::OnBtnMPlusClicked(wxCommandEvent &event){

}
void MyFrame::OnBtnMMoinsClicked(wxCommandEvent &event){

}
void MyFrame::OnBtnMRClicked(wxCommandEvent &event){

}
void MyFrame::OnBtnMCClicked(wxCommandEvent &event){

}
void MyFrame::OnBtnTestClicked(wxCommandEvent &event){
    
}
void MyFrame::OnBtnTest2Clicked(wxCommandEvent &event){

}

/*void MyFrame::OnBtnPuissanceClicked(wxCommandEvent &event){
    if (pileCalculatrice->_myPile.size() > 1){
        //on recupère les deux premiers elements de la pile
        double element1 = pileCalculatrice->recuperer();
        double element2 = pileCalculatrice->recuperer();

        //on supprime les 2 lignes correspondantes
        //display->Remove(display->GetLineLength(display->GetNumberOfLines()-2),display->GetLineLength(display->GetNumberOfLines()));
        
        double debut, fin;

        int tailleDerniereLigne = display->GetLineLength(display->GetNumberOfLines()-2) +1; //+1 pour le saut à la ligne
        int tailleAvantDerniereLigne = display->GetLineLength(display->GetNumberOfLines()-3) +1; //+1 pour le saut à la ligne
        
        debut = this->tailleTexte - tailleDerniereLigne - tailleAvantDerniereLigne;
        fin = this->tailleTexte;
        cout << "debut : " << debut << endl;
        cout << "fin : " << fin << endl;

        display->Remove(debut, fin);


        //on met élément2 à la puissance d'élément1 et on met le resultat dans la pile
        double resultat = MathFonction::puissance(element2, element1);//Element2 avant element1 pour garder le bon ordre d'opérande
        pileCalculatrice->ajouter(resultat);
        //on affiche le résultat
        (*display) << resultat << "\n";

        tailleDerniereLigne = display->GetLineLength(display->GetNumberOfLines()-2) +1; //+1 pour le saut à la ligne
        // cout << "resultat string : " << to_string(resultat) << endl;
        // cout << "taille resultat : " << display->GetLineLength(display->GetNumberOfLines()-2) << endl;
        this->tailleTexte = this->tailleTexte - (fin - debut) + tailleDerniereLigne; //+1 = saut à la ligne


        cout << "taille du texte : " << this->tailleTexte << endl;
    }
}*/
