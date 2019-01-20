#include <iostream>
 
using namespace std;
 
int main() {
 
    double salario;
    double tax = 0.0;
    double faixa1 = 0.0;
    double faixa2 = 0.0;
    double faixa3 = 0.0;

    cin>>salario;
 
    if (salario > 4500.0){
        faixa3 = salario - 4500;
        salario = salario - faixa3;
    } 
    if (salario > 3000.0){
        faixa2 = salario - 3000;
        salario = salario - faixa2;
    } 
    if (salario > 2000.0){
        faixa1 = salario - 2000;
        salario = salario - faixa1;
    }
    tax = 0.28*faixa3 + 0.18*faixa2 + 0.08*faixa1;
    if (tax > 0.0)
        printf("R$ %.2f\n",tax);         
    else 
        printf("Isento\n");

    return 0;
}
