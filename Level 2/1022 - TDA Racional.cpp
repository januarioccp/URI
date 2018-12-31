#include <iostream>
#include <algorithm>
using namespace std;

int main() {
 
    // Case tests
    int caseTests;

    // input data
    int PA,PB;
    double G1, G2;

    // read the caseTests
    cin>>caseTests;

    int answer;

    // read all numbers
    while(caseTests > 0){
        cin>>PA>>PB>>G1>>G2;
        answer = 0;
        while(PA <= PB && answer <= 100){
            PA = PA + (double)PA*(G1/100);
            PB = PB + (double)PB*(G2/100);
            answer++;
        }
        if(answer > 100)
            cout<<"Mais de 1 seculo."<<endl;
        else
            cout<<answer<<" anos."<<endl;
        caseTests--;
    }
    return 0;
}