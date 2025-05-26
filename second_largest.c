#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);

    int max = INT_MIN;
    int second_max = INT_MIN;
    int nombre;

    for (int i = 0; i < n; i++) {
        scanf("%d", &nombre);
        
        if (nombre > max) {
            second_max = max;
            max = nombre;
        } else if (nombre > second_max && nombre != max) {
            second_max = nombre;
        }
    }

    printf("Le deuxième plus grand nombre est : %d\n", second_max);

    return 0;
}