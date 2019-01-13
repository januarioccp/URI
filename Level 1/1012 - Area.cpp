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
     double a,b,c;//s,b;
     scanf("%lf %lf %lf",&a,&b,&c);
     //scanf("%d %lf %lf",&id2,&t2,&v2);
     printf("TRIANGULO: %.3lf\n",a*c/2);
     printf("CIRCULO: %.3lf\n",3.14159*c*c);
     printf("TRAPEZIO: %.3lf\n",(a+b)*c/2.0);
     printf("QUADRADO: %.3lf\n",b*b);
     printf("RETANGULO: %.3lf\n",a*b);
     
    return 0;
}
