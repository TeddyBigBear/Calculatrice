#
# Variables
#
OBJ = Calculatrice.cpp FramePrincipale.cpp Pile.cpp MathFonction.cpp
SRC_TEST = Pile.cpp TestPile.cpp MathFonction.cpp TestMathFonction.cpp
OBJ_TEST = $(SRC_TEST:.cpp=.o)

# Cible de l’exécutable : édition des liens des fichiers objet
#
calculatrice : $(OBJ)
	g++ -std=c++11 -o $@ $^ `wx-config --cxxflags --libs`

test-calculatrice : $(OBJ_TEST)
	g++ -std=c++11 -o $@ $^

#
# Cibles de dépendances : compilation des sources en fichiers objet
#
Pile.o: Pile.cpp Pile.hpp
TestPile.o: TestPile.cpp catch.hpp
	g++ -std=c++11 -c -o $@ TestPile.cpp 
MathFonction.o: MathFonction.cpp MathFonction.hpp
TestMathFonction.o: TestMathFonction.cpp catch.hpp
	g++ -std=c++11 -c -o $@ TestMathFonction.cpp 
#besoin de spécifier c++11 pour utiliser la fonction to_string dans le test


# Cibles habituelles
#
cleaner : clean
	rm -f calculatrice
	rm -f test-calculatrice
clean :
	rm -f *.o