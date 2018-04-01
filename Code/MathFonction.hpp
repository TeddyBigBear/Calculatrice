/* 
MathFonction.hpp
Projet Calculatrice / Groupe : Sonia 
Date de creation : 31/03/2018
*/


/* 
Pour respecter le paradigme de programation orientée objet on crée une classe meme si les methodes sont basiques.
Mais toutes les methodes sont static pour ne pas avoir a instancier l'objet.
Les fonction s'appelent comme ca : resultat = MathFonction::Additioner(a, b);
*/
#include <string>

using namespace std;

class MathFonction
    {  
    public:
        //Constructeur
        MathFonction();
        
        static string calculErreur; //Variable qui va contenir temporairement les erreurs de calcul à afficher

        // Returns a + b
        static double Additioner(double a, double b);

        // Returns a - b
        static double Soustraire(double a, double b);

        // Returns a * b
        static double Multiplier(double a, double b);

        // Returns a / b
        static double Diviser(double a, double b);
    };
} 