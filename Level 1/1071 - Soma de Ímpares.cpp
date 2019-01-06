#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

    // Test cases
    int x,y;
    cin>>x;
    cin>>y;
    int sum = 0;
    for(int i=min(x,y)%2 ? min(x,y)+2 : min(x,y)+1; i < max(x,y); i+=2)
        sum += i;
    cout<<sum<<endl;
    return 0;
}