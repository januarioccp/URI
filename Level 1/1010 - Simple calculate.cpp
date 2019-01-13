#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
     int id1, id2;
     double t1,t2;
     double v1,v2;
     double s,b;
     scanf("%d %lf %lf",&id1,&t1,&v1);
     scanf("%d %lf %lf",&id2,&t2,&v2);
     printf("VALOR A PAGAR: R$ %.2lf\n",t1*v1+t2*v2);
     
    return 0;
}
