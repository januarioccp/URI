#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    // input data
    int X1,Y1,X2,Y2;

    while(cin>>X1>>Y1>>X2>>Y2){
        if( !X1 && !X2 && !Y1 && !Y2 )
            break;
        // no move
        else
            if( X1 == X2 && Y1 == Y2 )
                cout<<0<<endl;
        // one move
        else
            if( X1 == X2 || // SAME COLLUMN
                Y1 == Y2 || // SAME ROW
                Y1 == Y2 + (X2-X1) || Y1 == Y2 + (X1-X2) ||
                Y2 == Y1 + (X2-X1) || Y2 == Y1 + (X1-X2) )   
                cout<<1<<endl;
        else
            cout<<2<<endl;
    }
    return 0;
}