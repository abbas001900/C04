#include <stdio.h>
#include <limits.h> // Nécessaire pour utiliser la constante INT_MIN

int main() {
    int n; // Variable pour stocker le nombre d'entiers à lire
    scanf("%d", &n); // Lecture du nombre d'éléments à traiter

    // Initialisation des deux plus grandes valeurs rencontrées
    // On utilise INT_MIN pour s'assurer que n'importe quel entier lu sera plus grand
    int max = INT_MIN;         // Le plus grand nombre rencontré
    int second_max = INT_MIN;  // Le deuxième plus grand nombre

    int nombre; // Variable temporaire pour stocker chaque nombre lu

    // Boucle pour lire et traiter n entiers
    for (int i = 0; i < n; i++) {
        scanf("%d", &nombre); // Lecture d’un entier

        // Si le nombre est plus grand que l’actuel maximum
        if (nombre > max) {
            second_max = max; // L’ancien maximum devient le second maximum
            max = nombre;     // Le nouveau nombre devient le maximum
        }
        // Si le nombre est inférieur au maximum mais supérieur au second_max
        // et qu’il est différent du maximum (pour éviter les doublons)
        else if (nombre > second_max && nombre != max) {
            second_max = nombre; // Mise à jour du second plus grand nombre
        }
    }

    // Affichage du deuxième plus grand nombre
    printf("Le deuxième plus grand nombre est : %d\n", second_max);

    return 0; // Fin normale du programme
}
