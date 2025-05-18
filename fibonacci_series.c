#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, temp;
    scanf("%d", &n);
    if (n < 0) {
        printf("Erreur.\n");
        return 1;
    }
    while (t1 <= n){
        printf("%d ", t1);
        temp = t1 + t2;
        t1 = t2;
        t2 = temp;
    }
    printf("\n");
    return 0;
}
// c'est programme affiche  la série de Fibonacci jusqu'à une valeur limite donnée.