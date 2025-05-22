#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    int a = 0, b = 1, temp;

    // Lecture de l'entrée
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    printf("Fibonacci : ");

    // Si la limite est négative, rien à afficher
    if (n < 0) {
        printf("\n");
        return 0;
    }

    // Affichage des termes sur la même ligne
    while (a <= n) {
        printf("%d ", a);

        // Protection contre le dépassement
        if (a > INT_MAX - b) {
            printf("\nErreur\n");
            return 1;
        }

        temp = a + b;
        a = b;
        b = temp;
    }

    printf("\n");
    return 0;
}
// c'est programme affiche  la série de Fibonacci jusqu'à une valeur limite donnée.
