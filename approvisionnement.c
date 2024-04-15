#include <stdio.h>
#include "produit.h"

// Fonction pour effectuer une opération d'approvisionnement
void approvisionner(Produit Lesproduits[], int nbr) {
    int reference, quantite;

    printf("Reference du produit a approvisionner : ");
    scanf("%d", &reference);

    int i;
    for (i = 0; i < (nbr); i++) {
        if (Lesproduits[i].reference == reference) {
            printf("Quantite a ajouter : ");
            scanf("%d", &quantite);

            Lesproduits[i].quantite += quantite;

            printf("L'approvisionnement a ete effectue avec succes.\n\n");
            return;
        }
    }

    printf("Produit non trouve.\n\n");
}


