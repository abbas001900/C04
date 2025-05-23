#include <stdio.h>

void max() {
    int i, n, maximum;

    scanf("%d", &n);

    int tableau[n]; // Déclaration du tableau

    // Lecture des éléments du tableau
    for(i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }

    // Initialisation du maximum avec le premier élément
    maximum = tableau[0];

    // Recherche du plus grand élément
    for(i = 1; i < n; i++) {
        if(tableau[i] > maximum) {
            maximum = tableau[i];
        }
    }

    // Affichage du résultat
    printf("Le maximum est : %d\n", maximum);
}

int main(void){
    max(); // ✅ Appel correct sans argument
    return 0;
}
