#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     double nota;
     scanf("%lf",&nota);
	 printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n",((int)nota)/100);
	nota = nota - (double)(((int)nota)/100)*100.0;
	printf("%d nota(s) de R$ 50.00\n",((int)nota)/50);
	nota = nota - (double)(((int)nota)/50)*50.0;
	printf("%d nota(s) de R$ 20.00\n",((int)nota)/20);
	nota = nota - (double)(((int)nota)/20)*20.0;
	printf("%d nota(s) de R$ 10.00\n",((int)nota)/10);
	nota = nota - (double)(((int)nota)/10)*10.0;
	printf("%d nota(s) de R$ 5.00\n",((int)nota)/5);
	nota = nota - (double)(((int)nota)/5)*5.0;
	printf("%d nota(s) de R$ 2.00\n",((int)nota)/2);
	nota = nota - (double)(((int)nota)/2)*2.0;
	printf("MOEDAS:\n");
	if(nota >= 1.0)
		printf("1 moeda(s) de R$ 1.00\n");
	else
		printf("0 moeda(s) de R$ 1.00\n");
	nota = nota - (double)(((int)nota)/1)*1.0;
	nota=nota * 100.0;
	printf("%d moeda(s) de R$ 0.50\n",((int)nota)/50);
	nota = nota - (double)(((int)nota)/50)*50.0;
	printf("%d moeda(s) de R$ 0.25\n",((int)nota)/25);
	nota = nota - (double)(((int)nota)/25)*25.0;
	printf("%d moeda(s) de R$ 0.10\n",((int)nota)/10);
	nota = nota - (double)(((int)nota)/10)*10.0;
	printf("%d moeda(s) de R$ 0.05\n",((int)nota)/5);
	nota = nota - (double)(((int)nota)/5)*5.0;
	printf("%d moeda(s) de R$ 0.01\n",((int)nota)/1);
	
    return 0;
}
