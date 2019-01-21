#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    int notas;
    scanf("%d",&n);
    // printf("%d\n",n );
    notas = n/365;
    printf("%d ano(s)\n", notas);
    n = n - notas*365;
    notas = n/30;
    printf("%d mes(es)\n", notas);
    n = n - notas*30;
    notas = n;
    printf("%d dia(s)\n", notas);
    
}
