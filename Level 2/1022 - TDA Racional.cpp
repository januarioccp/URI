#include <iostream>
#include <algorithm>
using namespace std;

int main() {
 
    // Case tests
    int caseTests;

    // input data
    int n1,d1,n2,d2;
    char t1,t2;
    char symbol;
    int n3, d3;

    // read the caseTests
    cin>>caseTests;

    // read all numbers
    while(caseTests-- > 0){
        // It is easier to read with scanf :-)
        scanf("%d %c %d %c %d %c %d",&n1,&t1,&d1,&symbol,&n2,&t2,&d2);
       
        // evaluate the symbol
        if(symbol == '+'){
            n3 = n1*d2 + n2*d1;
            d3 = d1*d2;
        }
        if(symbol == '-'){
            n3 = n1*d2 - n2*d1;
            d3 = d1*d2;
        }
        if(symbol == '*'){
            n3 = n1*n2;
            d3 = d1*d2;
        }
        if(symbol == '/'){
            n3 = n1*d2;
            d3 = n2*d1;
        }
        
        // Compute the greatest common divisor
        int gcd = abs(__gcd(n3,d3));
        cout<<n3<<'/'<<d3<<" = "<<n3/gcd<<'/'<<d3/gcd<<endl;
    }
    return 0;
}