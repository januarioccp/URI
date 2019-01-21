#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int tempo;
     scanf("%d",&tempo);
     int s = tempo%60;
     int m = ((tempo-s)/60)%60;
     int h = tempo/3600;
     printf("%d:%d:%d\n",h,m,s);
    return 0;
}
