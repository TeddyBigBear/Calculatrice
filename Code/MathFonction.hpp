/* 
MathFonction.hpp
Projet Calculatrice / Groupe : JORE - BORIES - MARTINEZ - PHILIP 
Date de creation : 31/03/2018
*/


/* 
Pour respecter le paradigme de programation orientée objet on crée une classe meme si les methodes sont basiques.
Mais toutes les methodes sont static pour ne pas avoir a instancier l'objet
Les fonction s'appelent comme ca : resultat = MathFonction::Additioner(a, b);
*/
//#include <string>


using namespace std;

class MathFonction{  
    public:
        //Constructeur
        //MathFonction(); //Pas besoin d'un constructeur dans une classe statique 
        
        //static string calculErreur; //Variable qui va contenir temporairement les erreurs de calcul à afficher

        // Returns a + b
        static double additioner(double a, double b);

        // Returns a - b
        static double soustraire(double a, double b);

        // Returns a * b
        static double multiplier(double a, double b);

        // Returns a / b
        static double diviser(double a, double b);

        // Returns a * (b / 100);
        static double pourcentage(double a, double b);

        // Returns a^b
        static double puissance(double a, double b);

        // Returns a^²
        static double carre(double a);
};
