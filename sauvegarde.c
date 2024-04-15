#include <stdio.h>
#include "produit.h"

void sauvegarder(Produit Lesproduits[], int nbr){
	FILE *fic = fopen("Produits.txt", "w");
	if (fic == NULL){
		printf("Impossible d'ouvrir le fichier texte pour la sauvegarde!");
		return;
	}
	
	int i;
	for(i = 0; i<(nbr); i++)
	{
		fprintf(fic, "Produit %d \n", i+1);
		fprintf(fic, "Référence : ");
		fprintf(fic, "%d\n", Lesproduits[i].reference);
		fprintf(fic, "Nom : ");
		fprintf(fic, "%s\n", Lesproduits[i].nom);
		fprintf(fic, "Quantité : ");
		fprintf(fic, "%d\n", Lesproduits[i].quantite);
		fprintf(fic, "Prix Unitaire : ");
		fprintf(fic, "%.2f\n", Lesproduits[i].prix);
		fprintf(fic, "\n");
	}
	fclose(fic);
	printf("Les produits ont été sauvegardés avec succès!");
}
