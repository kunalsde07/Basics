#include<bits/stdc++.h>
using namespace std;
/*
Patterns -> Nested loops

* 4 Rules:

(1) Outer loop focuses on row 
(2) Inner Loop focuses on column
(3) Always print statement should be in inner loop
(4) Observse symmetry [Optionals Steps]

Pattern12:
      
    1             1
    1 2         2 1
    1 2 3     3 2 1
    1 2 3 4 4 3 2 1
          
*/

void Pattern12(int n){
    int space = 2*(n-1);
    for(int i=1; i<=n; i++){
        //numbers
        for(int j=1; j<=i; j++){
            cout << j << " ";
        }
        //space
        for(int j=1; j<= space; j++){ // Striver's formulae 2*n - (2*i +1)
            cout << "  ";
        }
        //numbers
        for(int j=i; j>=1; j--){
            cout << j << " ";
        }
        cout << endl;
        space -= 2;
    }
}

int main(){
    int n;
    cin >> n;
    Pattern12(n);
}
