#include<bits/stdc++.h>
using namespace std;
/*
Patterns -> Nested loops

* 4 Rules:

(1) Outer loop focuses on row 
(2) Inner Loop focuses on column
(3) Always print statement should be in inner loop
(4) Observse symmetry [Optionals Steps]

Pattern1:

    1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1
    
*/

void pattern11(int n){
    int start = 1;
    for(int i=0; i<n; i++){
        if(i % 2 == 0) start = 1;
        else start = 0;
        for(int j=0; j<=i; j++){
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    pattern11(n);
}
