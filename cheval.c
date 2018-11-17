#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "joueur.h"
#include "cheval.h"

int main(){

	char c_coul[][6]={"BLEU","VERT","ROUGE","JAUNE"};
	char c_numero[][7]={"UN","DEUX","TROIS","QUATRE"};
			
			
	cheval tab_cheval[16];
		
		
	for(couleur_c i=BLEU;i<=JAUNE;i++){
		for(numero_c j=UN;j<=QUATRE;j++){
			tab_cheval[4*i+j].couleur=i;
			tab_cheval[4*i+j].numero=j;
		}
	}
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			tab_cheval[4*i+j].position.x=i;
			tab_cheval[4*i+j].position.y=j;
		}
	}
	
	for(int i=0;i<16;i++){
		printf("Cheval N°%d \n Couleur : %s \n Numero : %s \n Position : %d,%d \n", i,c_coul[tab_cheval[i].couleur], c_numero[tab_cheval[i].numero], tab_cheval[i].position.x, tab_cheval[i].position.y);
	}
}
