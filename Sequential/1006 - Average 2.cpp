#include <stdio.h>
#include <math.h>
double A,B,C;
double MEDIA;
int main() {
 
    scanf("%lf",&A);
    scanf("%lf",&B);
    scanf("%lf",&C);
    
    MEDIA = (2.0*A+3.0*B+5.0*C)/(10.0);
        
    printf("MEDIA = %.1lf\n",MEDIA);
    
    return 0;
}
