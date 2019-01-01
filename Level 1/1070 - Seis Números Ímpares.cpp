#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

    // Test cases
    int n;
    cin>>n;
    if(n%2==0)
        n++;
    for(int i=0; i < 6; i++)
        cout<<n+2*i<<endl;
    return 0;
}