/*
La pile (ou stack en anglais) 
est un type de stockage de données qui marche en LIFO (Last In First Out).
Les elements ajouté et retiré de la pile se font donc toujours par le dessus.
 
Les fonction de la librairie "stack" sont:
empty() – Retourne true si la pile est vide
size() – Retourne la taille de la pile
top() – Retourne "a reference" a l'element au dessus de la pile
push(x) – Ajoute l'element 'x au dessus de la pile
pop() – suprime le premier element de la pile

il est necesaire d'instancier l'objet stack et le type d'elements qu'elle contiens ex : stack <int> g = gq;
*/

//librairies externe
#include <iostream>
#include <stack>

//librairies interne
#include "Pile.hpp"

 
using namespace std;

/**
 * Cette fonction permet d'ajouter un seul element au dessus de la pile
 * parametres : objet stack, l'element a ajouter
 */
void Ajouter_a_la_pile (stack<double> pile_locale, double element)
{
  pile_locale.push(element);
}

/**
 * Cette fonction renvois le premier element de la pile sans le supprimer
 * parametres : objet stack
 */
double lire_premier_elements_pile (stack<double> pile_locale)
{
  return pile_locale.top();
}

/**
 * Cette fonction renvois le deuxieme element de la pile sans le supprimer
 * parametres : objet stack
 */
/*c'est peut etre pas une fonction utile selon l'implementation

double lire_deuxiemme_elements_pile (stack<int> pile_locale)
{
  int top = pile_locale.top(); //enregistre le premier
  pile_locale.pop(); //supprime le premier
  return pile_locale.top(); // retourne le deuxiemme
  pile_locale.push(top); //remet le premier dans la pile
}
*/

/**
 * Cette fonction permet de supprimer un seul element au dessus de la pile
 * parametres : objet stack
 */
void supprimer_premier_elements_pile (stack<double> pile_locale)
{
  pile_locale.pop();
}
