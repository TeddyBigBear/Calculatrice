/* 
 * Projet POO - Calculatrice
 * BORIES - JORE - MARTINEZ - PHILIP
 */

using namespace std;

class MathFonction{  
    public:
        //Constructeur
        //MathFonction(); //Pas besoin d'un constructeur dans une classe statique 
        
        //static string calculErreur; //Variable qui va contenir temporairement les erreurs de calcul à afficher

        // Returns a + b
        static double Additionner(double a, double b);

        // Returns a - b
        static double Soustraire(double a, double b);

        // Returns a * b
        static double Multiplier(double a, double b);

        // Returns a / b
        static double Diviser(double a, double b);

        // Returns a * (b / 100);
        static double Pourcentage(double a, double b);

        // Returns a^b
        static double Puissance(double a, double b);

        // Returns a^²
        static double Carre(double a);
};
