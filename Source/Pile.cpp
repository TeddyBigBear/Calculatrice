/* 
 * Projet POO - Calculatrice
 * BORIES - JORE - MARTINEZ - PHILIP
 */

/*
La pile (ou stack en anglais) 
est un type de stockage de données qui marche en LIFO (Last In First Out).
Les elements ajouté et retiré de la pile se font donc toujours par le dessus.
*/

#include "Pile.hpp"

using namespace std;

//Constructeur de la pile
Pile::Pile(){
  this->_myPile;
  this->element1 = 0;
  this->element2 = 0;
  this->resultatOperation = 0;
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

bool Pile::Pile1ElementMinimum(){
  if(!this->_myPile.empty()){
    double top1 = this->_myPile.top(); //enregistre le premier
    this->_myPile.pop(); //supprime le premier
    
    if(this->_myPile.empty()){
      ajouter(top1);
      return true; //La pile est vide après avoir retiré 1 élément, il y a au moins 1 élément
    }
    else ajouter(top1);
    return true; //La pile n'est pas vide après avoir retiré 1 élément, la pile a au moins 2 éléments
  }
  return false;//La pile a 0 élément
}

bool Pile::Pile2ElementsMinimum(){
  if(!this->_myPile.empty()){
    double top1 = this->_myPile.top(); //enregistre le premier
    this->_myPile.pop(); //supprime le premier
    
    if(this->_myPile.empty()){
      ajouter(top1);
      return false; //La pile est vide après avoir retiré 1 élément, il n'y a qu'un seul élement
    }
    else {
      ajouter(top1);
      return true; //La pile n'est pas vide après avoir retiré 1 élément, la pile a au moins 2 éléments 
    }
  }
  return false; //La pile a 0 élément
}