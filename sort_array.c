#include <stdio.h>

// Fonction de tri à bulles : trie un tableau d'entiers en ordre croissant
void bubbleSort(int arr[], int n) {
    // Parcours du tableau (n - 1) fois
    for (int i = 0; i < n - 1; i++) {
        // À chaque passage, les plus grands éléments "remontent" vers la fin du tableau
        for (int j = 0; j < n - i - 1; j++) {
            // Comparaison de deux éléments consécutifs
            if (arr[j] > arr[j + 1]) {
                // Échange des éléments si l’ordre est incorrect (tri croissant)
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n; // Nombre d’éléments dans le tableau

    // Lecture du nombre d'éléments à trier
    scanf("%d", &n);

    // Déclaration du tableau de taille n
    int arr[n];

    // Lecture des n éléments à trier
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Appel de la fonction de tri à bulles pour trier le tableau
    bubbleSort(arr, n);

    // Affichage du tableau trié
    printf("Tableau trié : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n"); // Nouvelle ligne après l’affichage

    return 0; // Fin normale du programme
}
