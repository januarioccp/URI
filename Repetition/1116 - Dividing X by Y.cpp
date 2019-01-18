#include <iostream>
#include <string>
using namespace std;

int main() {
    double x;
    double y;
    string message = "divisao impossivel\n";
    int testCase;

    cin>>testCase;

    while(testCase--){
        cin>>x>>y;
        if(y)
            printf("%.1f\n",x/y);
        else
            cout<<message;
    }
    return 0;
}
