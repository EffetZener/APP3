all: main


CC=clang
CFLAGS=-g -Wall -Wextra -Werror

# Ici, on utilise l'"intelligence" de 'make' qui saura tout seul
# comment créer les .o à partir des .c

main: main.o arbresphylo.o arbres.o

clean:
	rm -f main *.o
	#