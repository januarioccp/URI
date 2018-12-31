#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    std::cin>>n;
    for(int i = 1; i <= n; i++)
        if(i%2==1)
            cout<<i<<endl;
    return 0;
}