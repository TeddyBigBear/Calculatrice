#
# Variables
#
OBJ = calculatrice.cpp framePrincipale.cpp pile.cpp mathFonction.cpp

# Cible de l’exécutable : édition des liens des fichiers objet
#
calculatrice : $(OBJ)
	g++ -std=c++11 -o $@ $^ `wx-config --cxxflags --libs`

#
# Cibles de dépendances : compilation des sources en fichiers objet
#
#convertisseur.o : convertisseur.cpp

# Cibles habituelles
#
cleaner : clean
	rm -f calculatrice
clean :
	rm -f *.o