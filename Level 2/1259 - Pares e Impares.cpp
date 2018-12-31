#include <iostream>
#include <algorithm>
using namespace std;

int main() {
 
    // Total of input numbers
    int total;

    int read_number;

    int oddCounter = 0;
    int evenCounter = 0;

    // read the total of numbers
    cin>>total;

    // list of numbers
    int listOdd[total+1];
    int listEven[total+1];

    // read all numbers
    while(total > 0){
        cin>>read_number;

        // Check if the read number is odd
        if(read_number%2 == 1){
            listOdd[oddCounter] = read_number;
            oddCounter++;
        }
        else{
            listEven[evenCounter] = read_number;
            evenCounter++;
        }
        total--;
    }
    
    //Sort both sequence of numbers
    sort(listOdd,listOdd+oddCounter);
    sort(listEven,listEven+evenCounter);
    
    // Print even number in increasing order
    for(int count = 0; count < evenCounter; count++)
        cout<<listEven[count]<<endl;
    
    // Print odd number in nonincreasing order
    for(int count = oddCounter-1; count >= 0; count--)
        cout<<listOdd[count]<<endl;

    return 0;
}
