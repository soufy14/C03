#include <stdio.h>

int main() {
    int n;
    int a = 0, b = 1, next;

    scanf("%d", &n);

    if ( a <= 9) {

    }
    while (a <= n) {
        printf("%d", a);
        next = a + b;
        a = b;
        b = next;
    }

    printf("\n");
    return 0;
}

// c'est programme affiche  la série de Fibonacci jusqu'à une valeur limite donnée.