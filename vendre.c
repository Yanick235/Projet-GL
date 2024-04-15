#include <stdio.h>
#include "produit.h"

// Fonction pour effectuer une opération de vente
void vendre(Produit Lesproduits[], int nbr) {
    int reference, quantite;

    printf("Reference du produit a vendre : ");
    scanf("%d", &reference);

    int i;
    for (i = 0; i < (nbr); i++) {
        if (Lesproduits[i].reference == reference) {
            printf("Quantite a vendre : ");
            scanf("%d", &quantite);

            if (quantite > Lesproduits[i].quantite) {
                printf("Quantite insuffisante en stock.\n\n");
                return;
            }

            Lesproduits[i].quantite -= quantite;

            printf("La vente a ete effectuee avec succes.\n\n");
            return;
        }
    }

    printf("Produit non trouve.\n\n");
}
