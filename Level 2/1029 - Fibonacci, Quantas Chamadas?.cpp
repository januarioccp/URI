#include <iostream>
#include <algorithm>
using namespace std;

int contador;

int fib(int i){
    contador++;
    if(i < 2)
        return i;
    else
        return fib(i-1)+fib(i-2);
}

int main() {
 
    // Case tests
    int caseTests;

    int n;
    int answer;

    cin>>caseTests;
    // read all numbers
    while(caseTests-- > 0){
        cin>>n;
        contador=0;
        answer = fib(n);
        cout<<"fib("<<n<<") = "<<contador-1;
        cout<<" calls = "<<answer<<endl;
    }
    return 0;
}