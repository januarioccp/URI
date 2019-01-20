#include <iostream>
 
using namespace std;
 
int main() {
 
    double salario;
    double novo_salario;
    double reajuste;
    double percentual;
    
    cin>>salario;
 
    if (salario > 2000.0){
        percentual = 4.0;        
        novo_salario = salario*(1+percentual/100);
        reajuste = novo_salario - salario;       
    } else if (salario > 1200.0){
        percentual = 7.0;        
        novo_salario = salario*(1+percentual/100);
        reajuste = novo_salario - salario;       
    } else if (salario > 800.0){
        percentual = 10.0;        
        novo_salario = salario*(1+percentual/100);
        reajuste = novo_salario - salario;       
    } else if (salario > 400.0){
        percentual = 12.0;        
        novo_salario = salario*(1+percentual/100);
        reajuste = novo_salario - salario;       
    } else if (salario >= 0.0){
        percentual = 15.0;        
        novo_salario = salario*(1+percentual/100);
        reajuste = novo_salario - salario;       
    }
    printf("Novo salario: %.2f\n",novo_salario);
    printf("Reajuste ganho: %.2f\n",reajuste);
    printf("Em percentual: %.0f \%\n",percentual);
    
    return 0;
}
