#include <iostream>
#include <algorithm>
#include <string>
#include <utility>
using namespace std;

// Test cases
int tamanho;
string wagon1;
string wagon2;
string pilha;
int w1, w2, p;

bool procura(){
    for(int i=w1; i< tamanho; i++){
        if (wagon1[i] == wagon2[w2])
        return true;
    }
    return false;
}
int main() {

    // Read the testCases of numbers
    cin>>tamanho;

    while(tamanho){
        wagon1.resize(tamanho);
        wagon2.resize(tamanho);
        pilha.resize(tamanho);
        w1=w2=p=0;
        for(int i=0; i < tamanho; i++){
            cin>>wagon1[i];
        }
        for(int i=0; i < tamanho; i++)
            cin>>wagon2[i];
        
        while(true){
            if(p && wagon2[w2]==pilha[p-1]){
                cout<<'R'<<flush;
                w2++;
                p--;
            }
            else{
                if(w1<tamanho){
                    pilha[p] = wagon1[w1];
                    p++;
                    w1++;
                    cout<<'I'<<flush;
                }
                else{
                    cout<<" Impossible"<<flush;
                    break;
                }
            }
            if(w2 == tamanho)
                break;
        }
        cout<<endl;
        cin>>tamanho;
    }
    
    return 0;
}