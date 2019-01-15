#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
     char nome[100];
     double s,b;
     scanf("%s",nome);
     scanf("%lf",&s);
     scanf("%lf",&b);
     printf("TOTAL = R$ %.2lf\n",s+b*.15);
     
    return 0;
}
