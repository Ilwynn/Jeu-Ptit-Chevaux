#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "joueur.h"
#include "plateau.h"
#include "main.h"
#include "interface.h"
#include "jeu.h"
#include "cheval.h"

int main(){
	
	int nbjoueur;
	
	/* START */ 
	 
	printf("Nombre de joueur(s) : ");
	scanf("%d",&nbjoueur);
	
	joueur tab_joueur[nbjoueur];
	
	for (int i=0;i<nbjoueur;i++){
		
		/* Numéro */
		
		printf("Joueur %d !\n",i+1);
		tab_joueur[i].numero_j=i;
		
		/* Nom */
		do{
			printf("Quel est votre nom : ");
			scanf("%s",tab_joueur[i].nom_j);
			while (getchar() != '\n');
		}while(tab_joueur[i].nom_j == tab_joueur[i-1].nom_j);
		
		/* Couleur */
		
		do{
			printf("Quelle couleur : ");
			scanf("%s",tab_joueur[i].couleur);
			printf("%s  \n", tab_joueur[i].couleur);
			while (getchar() != '\n');
		}while(tab_joueur[i].couleur != "Bleu" && tab_joueur[i].couleur != "Vert" && tab_joueur[i].couleur != "Rouge" && tab_joueur[i].couleur != "Jaune" );
	
	}
		
	
	
}
