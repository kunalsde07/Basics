#include<bits/stdc++.h>
using namespace std;
/*
Patterns -> Nested loops

* 4 Rules:

(1) Outer loop focuses on row 
(2) Inner Loop focuses on column
(3) Always print statement should be in inner loop
(4) Observse symmetry [Optionals Steps]

Pattern10:

     Columns
      . 
 Rows . . 
      . . .
      . .
      .
*/

void Pattern10(int n){
    for(int i=1; i<=2*n-1; i++){
        int stars = i;
        if(i > n) stars = 2*n-i;
        for(int j=1; j<=stars; j++){
            cout << char(248) << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    Pattern10(n);
}
