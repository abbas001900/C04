#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int somme = 0;
    int nombre;

    for (int i = 0; i < n; i++) {
        scanf("%d", &nombre);
        somme += nombre;
    }

    float moyenne = (float)somme / n;
    printf("La moyenne est : %.1f\n", moyenne);

    return 0;
}