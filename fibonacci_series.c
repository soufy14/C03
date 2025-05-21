#include <stdio.h>

int main() {

    int n;
    int a = 0, b = 1, temp;

    scanf("%d", &n);

    if (n <= 0) {
        printf("Erreur\n");
        return 1;
    }

    while (a <= n) {
        printf("%d ", a); // Ajout d'un espace pour lisibilité
        temp = a + b;
        a = b;
        b = temp;
    }

    printf("\n");
    return 0;
}