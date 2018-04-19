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
MathFonction.o: MathFonction.cpp MathFonction.hpp
TestMathFonction.o: TestMathFonction.cpp catch.hpp

# Cibles habituelles
#
cleaner : clean
	rm -f calculatrice
	rm -f test-calculatrice
clean :
	rm -f *.o