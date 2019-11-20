#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

#include "arbres.h"
#include "arbresphylo.h"
#include "listes.h"

void analyse_arbre (arbre racine, int* nb_esp, int* nb_carac)
{
	//Init
			

	//printf("Caracs : %d,  Especes : %d\n", *nb_carac, *nb_esp);
	if(!racine->droit && !racine->gauche){
		*nb_esp = *nb_esp + 1 ;	
	}
	else{
		*nb_carac = *nb_carac + 1;
		if(racine->droit)
			analyse_arbre (racine->droit, nb_esp, nb_carac);			
			printf("Caracs : %d,  Especes : %d\n", *nb_carac, *nb_esp);
		if(racine->gauche)
			analyse_arbre (racine->gauche, nb_esp, nb_carac);
			printf("Caracs : %d,  Especes : %d\n", *nb_carac, *nb_esp);
	}
}







