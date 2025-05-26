#include <stdio.h>

// Fonction pour supprimer les doublons d'un tableau trié
int remove_duplicates(int arr[], int n) {
    // Si le tableau est vide ou ne contient qu'un seul élément, il n'y a rien à faire
    if (n == 0 || n == 1)
        return n;

    int unique_index = 0; // Index pour placer les éléments uniques

    // Parcours du tableau à partir du deuxième élément
    for (int i = 1; i < n; i++) {
        // Si l'élément actuel est différent du dernier élément unique enregistré
        if (arr[i] != arr[unique_index]) {
            unique_index++;             // On passe à la position suivante
            arr[unique_index] = arr[i]; // On copie l'élément unique à cette position
        }
    }

    // La nouvelle taille du tableau est unique_index + 1
    return unique_index + 1;
}

int main() {
    int n; // Nombre d'éléments à lire

    // Lecture du nombre d'éléments
    scanf("%d", &n);

    int arr[n]; // Déclaration du tableau de taille n

    // Lecture des éléments du tableau
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Tri du tableau avec l'algorithme de tri à bulles
    // Ce tri est nécessaire pour que la suppression de doublons fonctionne correctement
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Échange des éléments si l'ordre est incorrect
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Appel de la fonction de suppression des doublons
    int new_size = remove_duplicates(arr, n);

    // Affichage du tableau après suppression des doublons
    printf("Après suppression des doublons : ");
    for (int i = 0; i < new_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n"); // Nouvelle ligne à la fin de l'affichage

    return 0; // Fin normale du programme
}
