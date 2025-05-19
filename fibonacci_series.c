#include <stdio.h>

int main() {
    int n;
    int a = 0, b = 1, temp;

    scanf("%d", &n);
    if (n > 20 || n < 0) {
        printf("Erreur\n");
        return 1;
    }
     while (a <= n) {
        printf("%d ", a);
        temp = a + b;
        a = b;
        b = temp;
    }
    printf("\n"); 
    return 0;
}

// c'est programme affiche  la série de Fibonacci jusqu'à une valeur limite donnée.