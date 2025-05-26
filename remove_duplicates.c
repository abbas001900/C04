#include <stdio.h>

int remove_duplicates(int arr[], int n) {
    if (n == 0 || n == 1)
        return n;

    int unique_index = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[unique_index]) {
            unique_index++;
            arr[unique_index] = arr[i];
        }
    }

    return unique_index + 1;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Tri du tableau (nécessaire pour cette méthode)
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    int new_size = remove_duplicates(arr, n);

    printf("Après suppression des doublons : ");
    for (int i = 0; i < new_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}