// ex1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOM 50


typedef struct {
    int id;
    char nom[MAX_NOM];
    float prix;
    int quantite;
} Produit;


Produit saisirProduit() {
    Produit p;
    
    printf("Entrez l'ID du produit : ");
    scanf("%d", &p.id);
    
    printf("Entrez le nom du produit : ");
    scanf(" %[^\n]", p.nom);  
    
    printf("Entrez le prix du produit : ");
    scanf("%f", &p.prix);
    
    printf("Entrez la quantite en stock : ");
    scanf("%d", &p.quantite);
    
    printf("\n");
    return p;
}


void afficherProduit(Produit p) {
    printf("ID : %d\n", p.id);
    printf("Nom : %s\n", p.nom);
    printf("Prix : %.2f DH\n", p.prix);
    printf("Quantite : %d\n", p.quantite);
    printf("------------------------\n");
}


Produit mettreAJourQuantite(Produit p, int nouvelleQuantite) {
    p.quantite = nouvelleQuantite;
    return p;
}


int main() {
    int n, i, index;
    int nouvelleQuantite;

    printf("Combien de produits voulez-vous saisir ? ");
    scanf("%d", &n);


    Produit *inventaire = (Produit *)malloc(n * sizeof(Produit));
    if (inventaire == NULL) {
        printf("Erreur d'allocation memoire !\n");
        return 1;
    }

    
    for (i = 0; i < n; i++) {
        printf("=== Saisie du produit %d ===\n", i + 1);
        inventaire[i] = saisirProduit();
    }

    
    printf("\n=== Inventaire complet ===\n");
    for (i = 0; i < n; i++) {
        printf("Produit %d :\n", i + 1);
        afficherProduit(inventaire[i]);
    }

    
    printf("\nQuel produit voulez-vous modifier (numero de 1 a %d) ? ", n);
    scanf("%d", &index);
    index--; 

    if (index >= 0 && index < n) {
        printf("Entrez la nouvelle quantite pour ce produit : ");
        scanf("%d", &nouvelleQuantite);

        
        inventaire[index] = mettreAJourQuantite(inventaire[index], nouvelleQuantite);

        
        printf("\n=== Produit apres mise a jour ===\n");
        afficherProduit(inventaire[index]);
    } else {
        printf("Numero de produit invalide !\n");
    }

    
    free(inventaire);

    return 0;
}

// ||||||||||||||||||||||||||\ exercice2 avec pointeur/|||||||||||||||

#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 

typedef struct {
    char nom[50];
    char prenom[50];
    int numeroEtudiant;
    float note;
} Etudiant;

void saisirEtudiant(Etudiant *e) {
    printf("\n--- Saisie des informations de l'etudiant ---\n");
    
    printf("Nom: ");
    scanf("%s", e->nom); 
    
    printf("Prenom: ");
    scanf("%s", e->prenom);
    
    printf("Numero d'etudiant: ");
    if (scanf("%d", &(e->numeroEtudiant)) != 1) {
        printf("Erreur de saisie pour le numero d'etudiant.\n");
        exit(EXIT_FAILURE);
    }
    
    printf("Note: ");
    if (scanf("%f", &(e->note)) != 1) {
        printf("Erreur de saisie pour la note.\n");
        exit(EXIT_FAILURE);
    }
}

void afficherEtudiant(Etudiant e) {
    printf("\n--- Informations Etudiant ---\n");
    printf("Nom: %s\n", e.nom);
    printf("Prenom: %s\n", e.prenom);
    printf("Numero Etudiant: %d\n", e.numeroEtudiant);
    printf("Note: %.2f/20.00\n", e.note);
    printf("---------------------------\n");
}

void modifierNote(Etudiant *e, float nouvelleNote) {
    e->note = nouvelleNote;
    printf("\n>>> La note de %s %s a ete mise a jour a %.2f.\n", e->prenom, e->nom, nouvelleNote);
}

int main() {
    int nbEtudiants;
    Etudiant *tableauEtudiants = NULL; 

    printf("Combien d'etudiants souhaitez-vous enregistrer ? ");
    if (scanf("%d", &nbEtudiants) != 1 || nbEtudiants <= 0) {
        printf("Saisie invalide ou nombre d'etudiants non positif.\n");
        return 1; 
    }

    tableauEtudiants = (Etudiant *)malloc(nbEtudiants * sizeof(Etudiant));

    if (tableauEtudiants == NULL) {
        perror("Erreur d'allocation memoire");
        return 1; 
    }

    printf("\n*** Saisie des informations pour les %d etudiants ***\n", nbEtudiants);
    for (int i = 0; i < nbEtudiants; i++) {
        printf("\n--- Etudiant %d/%d ---\n", i + 1, nbEtudiants);
        saisirEtudiant(&(tableauEtudiants[i])); 
    }

    printf("\n*** Affichage des informations de tous les etudiants ***\n");
    for (int i = 0; i < nbEtudiants; i++) {
        afficherEtudiant(tableauEtudiants[i]);
    }

    int indexModification;
    float nouvelleNote;

    printf("\n*** Modification de la note ***\n");
    printf("Entrez l'index de l'etudiant dont vous voulez modifier la note (1 a %d): ", nbEtudiants);
    if (scanf("%d", &indexModification) != 1) {
        printf("Saisie d'index invalide.\n");
        free(tableauEtudiants);
        return 1;
    }
    
    int indexReel = indexModification - 1;

    if (indexReel < 0 || indexReel >= nbEtudiants) {
        printf("Index invalide. L'etudiant %d n'existe pas.\n", indexModification);
    } else {
        printf("Entrez la nouvelle note pour l'etudiant #%d (%s %s): ", 
               indexModification, 
               tableauEtudiants[indexReel].prenom, 
               tableauEtudiants[indexReel].nom);
        if (scanf("%f", &nouvelleNote) != 1) {
            printf("Saisie de nouvelle note invalide.\n");
        } else {
            modifierNote(&(tableauEtudiants[indexReel]), nouvelleNote);

            printf("\n*** Informations de l'etudiant mis a jour ***\n");
            afficherEtudiant(tableauEtudiants[indexReel]);
        }
    }

    free(tableauEtudiants);
    tableauEtudiants = NULL; 

    printf("\nFin du programme. Memoire liberee.\n");
    
    return 0;
}