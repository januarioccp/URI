#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

    // Test cases
    int tc;
    cin>>tc;
    
    int x,y;
    while(tc--){
        cin>>x>>y;
        cout<<x - (x/y)*y + (x/y)<<endl;
    }
    return 0;
}