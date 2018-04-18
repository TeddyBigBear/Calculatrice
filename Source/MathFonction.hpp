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

        // Returns a²
        static double Carre(double a);

        // Returns a³
        static double Cube(double a);

        // Returns a^(1/2)
        static double Racine(double a);

        // Returns exp(a)
        static double Expo(double a);

        // Returns log10(a)
        static double Log(double a);

        // Returns ln(a)
        static double Ln(double a);

        // Returns 10^a
        static double PuissanceDe10(double a);
};
