#include<bits/stdc++.h>
using namespace std;
/*
Patterns -> Nested loops

* 4 Rules:

(1) Outer loop focuses on row 
(2) Inner Loop focuses on column
(3) Always print statement should be in inner loop
(4) Observse symmetry [Optionals Steps]

Pattern6:

    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2 
    1 

*/

void Pattern6(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    Pattern6(n);
}
