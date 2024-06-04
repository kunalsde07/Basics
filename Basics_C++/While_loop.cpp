#include<bits/stdc++.h>
using namespace std;

int main(){

    int i = 1,size;
    cin >> size;
    
    // While Loop
    while(i <= size){
        cout << "Hello" << endl;
        i++;
    }

    // do while loop
    do {
        cout << "Do...While loop runs for " << i << " Times"<<endl;
        i++;
    }while(i <= size);

    return 0;
}

