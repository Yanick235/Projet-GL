#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "produit.h"

#define max 500
 
 //La fonction principale

int main() {
	
	
    int nbr = 0;
    
    
    Produit Lesproduits[max];
    
    printf("BONJOUR ET BIENVENU SUR NOTRE PAGE DE STOCKAGE DE PRODUITS!\n");
    printf("\n");

    int choix;
    
    //Le menu
    
    do {
        printf("==== MENU ====\n");
    printf("1. Enregistrer un produit\n");
    printf("2. Afficher les produits disponibles\n");
    printf("3. Approvisionner un produit\n");
    printf("4. Vendre un produit\n");
    printf("5. Sauvegarder vos produits dans les archives\n");
    printf("6. Quitter\n");
    printf("\n=============================================\n");
    printf("Votre choix du menu: ");
    scanf("%d", &choix);

        switch (choix) {
            case 1:
                enregistrer(Lesproduits, &nbr);
                break;
            case 2:
                afficher(Lesproduits, nbr);
                break;
            case 3:
                approvisionner(Lesproduits, nbr);
                break;
            case 4:
                vendre(Lesproduits, nbr);
                break;
            case 5:
            	sauvegarder(Lesproduits, nbr);
            	break;
            case 6:
                printf("Bye bye!! A la prochaine.\n");
                break;
            default:
                printf("Votre choix est invalide.\n\n");
                break;
        }
    } while (choix != 6);
    

    return 0;
}
