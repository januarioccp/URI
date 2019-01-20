#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
 
    int a,b,c;
    bool retangulo = false;
    cin>>a>>b>>c;
 
    if(b > a)
        swap(a,b);
    if(c > a)
        swap(a,c);
    if(c > b)
     swap(c,b);

    // Now a > b > c

    if(a*a == b*b + c*c)
        retangulo = true;

    if(a < b+c){
        if (a==b && a==c)
        {
            cout<<"Valido-Equilatero"<<endl;
            cout<<"Retangulo: N"<<endl;
        }
        else 
            if (a!=b && a!=c && b!=c)
            {
                cout<<"Valido-Escaleno"<<endl;
                cout<<"Retangulo: "<<((retangulo) ? "S" : "N")<<endl;
            }
            else 
                if (a == b || a == c || b == c)
                {
                    cout<<"Valido-Isoceles"<<endl;
                    cout<<"Retangulo: "<<((retangulo) ? "S" : "N")<<endl;
                }
    }
    else
        cout<<"Invalido"<<endl;

    return 0;
}
