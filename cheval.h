#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

typedef enum{BLEU,VERT,ROUGE,JAUNE}couleur_c;
typedef enum{UN,DEUX,TROIS,QUATRE}numero_c;

typedef struct{
	int x;
	int y;
}position_cheval;

typedef struct{
	couleur_c couleur;
	numero_c numero;
	position_cheval position;
	int deplacement;
}cheval;


