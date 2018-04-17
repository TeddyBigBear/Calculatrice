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
  this->_myPile;
}


/**
 * Cette fonction permet d'ajouter un seul element au dessus de la pile
 * parametres : objet stack, l'element a ajouter
 */
void Pile::ajouter (double element)
{
  this->_myPile.push(element);
}

/**re_premier_elements_pile
 * Cette fonction renvois le premier element de la pile sans le supprimer
 * parametres : objet stack
 */
double Pile::recuperer ()
{
  double top1 = this->_myPile.top(); //enregistre le premier
  this->_myPile.pop(); //supprime le premier
  return top1;
}


void Pile::supprimer (){
  //free this._myPile;
}