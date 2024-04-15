#include <stdio.h>
#include "produit.h"



// Fonction pour afficher les informations d'un produit
void afficher(Produit Lesproduits[], int nbr) {
	int i;
   		printf("\n Produits disponibles...");
         
         for(i=0;i<(nbr);i++){
         		printf("\nProduit %d ...:\n", i+1);
			    printf("Référence : %d\n", Lesproduits[i].reference);
			    printf("Nom : %s\n", Lesproduits[i].nom);
			    printf("Quantité en stock : %d\n", Lesproduits[i].quantite);
			    printf("Prix unitaire : %.2f\n", Lesproduits[i].prix);
			    printf("..................\n");     
                     
            }
}

// Fonction pour enregistrer un produit
void enregistrer(Produit Lesproduits[], int *nbr) {
	
	
	int i;
	
	printf("\nEregistrement des informations des produits...\n");
	
	int nbrpro;
	
	Produit Unproduit[500];
	
	printf("Combien de produits voulez vous enregistrez aujourd'hui: \n");
    scanf("%d",&nbrpro);
    
		for(i=0;i<(nbrpro);i++){
		printf("\nProduit %d:\n", i+1);

	    printf("Reference : ");
	    scanf("%d", &Unproduit[i].reference);
	
	    printf("Nom : ");
	    scanf("%s", Unproduit[i].nom);
	
	    printf("Quantite en stock : ");
	    scanf("%d", &Unproduit[i].quantite);
	
	    printf("Prix unitaire : ");
	    scanf("%f", &Unproduit[i].prix);
	    
	    Lesproduits[*nbr] = Unproduit[i];
   		(*nbr)++;
	    
	}

	
	    printf("Vos produit ont été enregistré avec succès.\n\n");
//	}
}
