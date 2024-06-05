#include<bits/stdc++.h>
using namespace std;
/*
Patterns -> Nested loops

* 4 Rules:

(1) Outer loop focuses on row 
(2) Inner Loop focuses on column
(3) Always print statement should be in inner loop
(4) Observse symmetry [Optionals Steps]

Pattern8:

            .
          . . .
        . . . . .
      . . . . . . .
    . . . . . . . . .
      . . . . . . .
        . . . . .
          . . .
            .
          
*/

void practice_pattern9(int n){
    for(int i=0; i<2*n-1; i++){
        //Space
        int space1 = n-i-1;
        if(i > n) space1 = i-n;
        for(int j=0; j<space1; j++){
            cout << "  ";
        }
        //objects
        int object = 2*i+1;
        if(i > n) object = 2*n - (2*i -1);
        for(int j=0; j<object; j++){
            cout << char(248) << " ";
        }
        //space
        int space2 = n-i-1;
        if(i > n) space2 = i-n;
        for(int j=0; j<space2; j++){
            cout << "  ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    practice_pattern9(n);
}