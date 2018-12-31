#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    // input data
    long int a,b;
    long int resp;

    while(cin>>a>>b){
        resp = a^b;//XOR
        cout<<resp<<endl;
    }
    return 0;
}