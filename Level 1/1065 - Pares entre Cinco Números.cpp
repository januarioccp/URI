#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

    // Test cases
    int n, pares, impares, positivos, negativos;
    pares = impares = positivos = negativos = 0;

    for(int i=0; i < 5; i++){
        cin>>n;
        if (n%2)
            impares++;
        else
            pares++;
        if ( n > 0 )
            positivos++;
        if ( n < 0 )
            negativos++;
    }
    cout<<pares<<" valores pares"<<endl;
    //cout<<impares<<" valor(es) impar(es)"<<endl;
    //cout<<positivos<<" valor(es) positivo(s)"<<endl;
    //cout<<negativos<<" valor(es) negativo(s)"<<endl;
    
    return 0;
}