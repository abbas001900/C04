#include <stdio.h>

int main() {
    int n; // Variable pour stocker le nombre de valeurs à lire

    // Lecture du nombre d'éléments à entrer
    scanf("%d", &n);

    int somme = 0;    // Initialisation de la somme des nombres à 0
    int nombre;       // Variable temporaire pour stocker chaque valeur entrée

    // Boucle pour lire n entiers et les ajouter à la somme
    for (int i = 0; i < n; i++) {
        scanf("%d", &nombre);    // Lecture d’un entier
        somme += nombre;         // Ajout de l’entier à la somme
    }

    // Calcul de la moyenne : on convertit somme en float pour une division réelle
    float moyenne = (float)somme / n;

    // Affichage de la moyenne avec une précision d'une décimale
    printf("La moyenne est : %.1f\n", moyenne);

    return 0; // Fin normale du programme
}
