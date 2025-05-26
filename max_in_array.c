#include <stdio.h>

// Fonction qui lit une série d'entiers, puis affiche la plus grande valeur (maximum)
void max() {
    int i, n, maximum;

    // Lecture du nombre d'éléments à stocker dans le tableau
    // L'utilisateur doit entrer un entier n (n > 0)
    scanf("%d", &n);

    // Déclaration d'un tableau de taille variable (VLA) pour stocker les entiers
    // La taille est déterminée dynamiquement en fonction de la valeur de n
    int tableau[n];

    // Remplissage du tableau : lecture de n entiers au clavier
    for(i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }

    // Initialisation de la variable maximum avec le premier élément du tableau
    // Cela servira de point de comparaison pour les éléments suivants
    maximum = tableau[0];

    // Parcours du tableau à partir du deuxième élément
    // Si un élément est supérieur au maximum actuel, on le remplace
    for(i = 1; i < n; i++) {
        if(tableau[i] > maximum) {
            maximum = tableau[i];
        }
    }

    // Affichage de la plus grande valeur trouvée dans le tableau
    printf("Le maximum est : %d\n", maximum);
}

int main(void) {
    // Appel de la fonction max() pour exécuter le traitement
    // Aucun argument n'est requis : tout se fait par saisie utilisateur
    max();

    // Fin normale du programme
    return 0;
}
