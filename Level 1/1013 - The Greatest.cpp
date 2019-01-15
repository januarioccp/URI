#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
     //int id1, id2;
     //double t1,t2;
     //double v1,v2;
     int a,b,c,maior;//s,b;
     scanf("%d %d %d",&a,&b,&c);
     //scanf("%d %lf %lf",&id2,&t2,&v2);
     maior = a;
     if (b > maior)
        maior = b;
    if (c> maior)
        maior = c;
     printf("%d eh o maior\n",maior);
     
    return 0;
}
