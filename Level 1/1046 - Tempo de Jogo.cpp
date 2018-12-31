#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,p;
    cin>>n>>p;
    if(n<p)
        cout<<"O JOGO DUROU "<<(p-n)<<" HORA(S)"<<endl;
    else{
        cout<<"O JOGO DUROU "<<((24+p)-n)<<" HORA(S)"<<endl;
    }
      
    return 0;
}