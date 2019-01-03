#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

    // Test cases
    int t[4];
    int resp;
    for(int i=0; i < 4; i++){
        cin>>t[i];
    }
    sort(t,t+4);
    resp = t[3];
    for(int i=0; i < 3; i++){
        resp+= t[i]-1;
    }
    cout<<resp<<endl;
    

    return 0;
}