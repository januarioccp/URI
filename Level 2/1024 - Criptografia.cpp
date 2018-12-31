#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string inputString;

void first(){
    for(unsigned i = 0; i < inputString.size(); i++)
        if((inputString[i]>='a' && inputString[i]<='z') || (inputString[i]>='A' && inputString[i]<='Z'))
            inputString[i] = inputString[i]+3;
}

void second(){
    for(unsigned i = 0,j = inputString.size()-1; i < j; i++,j--)
        swap(inputString[i],inputString[j]);
}

void third(){
    for(unsigned i = inputString.size()/2; i < inputString.size(); i++)
        inputString[i] = inputString[i]-1;
}

int main() {

    // Test cases
    int testCases;

    // read the testCases of numbers
    scanf("%d\n",&testCases);

    // read all numbers
    while(testCases > 0){
        getline(cin,inputString,'\n');
        first();
        second();
        third();
        cout<<inputString<<endl;
        testCases--;
    }
    
    return 0;
}