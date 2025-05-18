#include <stdio.h>


int main() {
    int n;
    int original;
    int count = 0;

    scanf("%d", &n);

    original = n; // Sauvegarde de la valeur originale

    if (n == 0) {
        count = 1;
    } else {
        while (n != 0) {
            n = n / 10;
            count++;
        }
    }

    printf("%d contient %d chiffre(s).\n", original, count);

    return 0;
}
// Ce programme compte le nombre de chiffres d'un entier donné par l'utilisateur 