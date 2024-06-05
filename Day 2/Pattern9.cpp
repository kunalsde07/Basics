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
    . . . . . . . . .
      . . . . . . .
        . . . . .
          . . .
            .
          
*/
void Pattern7(int n){
    for(int i=0; i<n; i++){
        //Space
        for(int j=0; j<n-i-1; j++){
            cout << "  ";
        }
        for(int j=0; j<2*i+1; j++){
            cout << char(248) << " ";
        }
        for(int j=0; j<n-i-1; j++){
            cout << "  ";
        }
        cout << endl;
    }
}
void Pattern8(int n){
    for(int i=0; i<n; i++){
        //Space
        for(int j=0; j<i; j++){
            cout << "  ";
        }
        for(int j=((2*n)-(i+i))-1; j>0; j--){ // Striver's formulae 2*n - (2*i +1)
            cout << char(248) << " ";
        }
        for(int j=0; j<i; j++){
            cout << "  ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    Pattern7(n);
    Pattern8(n);
}
