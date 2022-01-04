# compilateur
CC := gcc
# options de compilation
CFLAGS := -std=c99 -Wall -Wextra -pedantic -ggdb
# les options -Wno-unused-variable -Wno-unused-parameter
# sont recommandées mais non obligatoires
# all est la cible par défaut choisie par la commande make
# elle dépend de la règle executable, qui va être réalisée
# en fonction de la description donnée dans la suite
all : executable
# déclaration des fichiers objets nécessaires à la création de executable

executable : main.o fonctions.o
	     $(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	     $(CC) $(CFLAGS) -o $@ -c $<

memoire:
	  valgrind --leak-check=full ./executable

clean:
	  rm -f executable *.o

run:
	  ./executable
