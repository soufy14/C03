#include <stdio.h>

int main() {
   int n, q = 0, p = 0;

   scanf("%d", &n);
 // inverser des chiffres par while   
   while ( n != 0) {
      q = q * 10 + n % 10;
        n = n / 10;
   }     

   if ( p ) {
    q = -q;
   }
    printf("Nombre inversé : %d\n", q);

    return  0;;
   }
// ce programme inverse un nombre entier donné par l'utilisateur 