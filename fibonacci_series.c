#include <stdio.h>

int main() {
    int n, i;
    long t1 = 0, t2 = 1;
    // initialiser les deux premiers termes de la série de Fibonacci 
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        printf("%ld ", t1);
        // affichier les termes de la série de Fibonacci 
        t2 = t1 + t2;
        t1 = t2 - t1;
    }
    printf("\n");
    return 0;
}
// c'est programme affiche  la série de Fibonacci jusqu'à une valeur limite donnée.