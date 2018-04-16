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


//librairies interne
#include "pile.hpp"

 
using namespace std;

//Constructeur de la pile
Pile::Pile(){
  this._myPile = nullptr;
}


/**
 * Cette fonction permet de verifier si la pile est vide
 * parametres : objet stack
 * retourne : true si stack vide ; false si non vide
 */
bool verifier_pile_vide(){
    if (_myPile.empty){
      return true;
    }
    else
      return false;
}

//TODO: Checker si 1 seul élément est dans la pile lors des opérations


/**
 * Cette fonction permet d'ajouter un seul element au dessus de la pile
 * parametres : objet stack, l'element a ajouter
 */
void Ajouter_a_la_pile (double element)
{
  this._myPile.push(element);
}

/**
 * Cette fonction renvois le premier element de la pile sans le supprimer
 * parametres : objet stack
 */
double lire_premier_elements_pile ()
{
  return this._myPile.top();
}

/**
 * Cette fonction renvois le deuxieme element de la pile sans le supprimer
 * parametres : objet stack
 */

double lire_deuxiemme_elements_pile ()
{
  double top1 = this._myPile.top(); //enregistre le premier
  this._myPile.pop(); //supprime le premier
  double top2 = this._myPile.top(); // retourne le deuxiemme
  this._myPile.push(top); //remet le premier dans la pile
  return top2;
}


/**
 * Cette fonction permet de supprimer un seul element au dessus de la pile
 * parametres : objet stack
 */
void supprimer_premier_elements_pile ()
{
  this._myPile.pop();
}


void supprimer_entierement_pile (){
  free this._myPile;
}