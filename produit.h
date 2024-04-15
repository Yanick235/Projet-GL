#ifndef PRODUIT_H
#define PRODUIT_H

// Structure pour repr�senter un produit
typedef struct {
    int reference;
    char nom[50];
    int quantite;
    float prix;
} Produit;

// Fonction pour afficher les informations d'un produit
void afficher(Produit Lesproduits[], int nbr);

// Fonction pour enregistrer un produit
void enregistrer(Produit Lesproduits[], int *nbr);

// Fonction pour effectuer une op�ration d'approvisionnement
void approvisionner(Produit Lesproduits[], int nbr);

// Fonction pour effectuer une op�ration de vente
void vendre(Produit Lesproduits[], int nbr);

//Fonction pour sauvegarde des produits dans un fichier

void sauvegarder(Produit Lesproduits[], int nbr);

#endif
