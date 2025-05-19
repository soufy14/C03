#include <stdio.h>

int main() {
    int limite;
    int a = 0, b = 1, next;

    // Lire la limite depuis l'utilisateur
    scanf("%d", &limite);

    // Afficher la suite tant que a est inférieur ou égal à la limite
    while (a <= limite) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }

    printf("\n");
    return 0;
}

// c'est programme affiche  la série de Fibonacci jusqu'à une valeur limite donnée.