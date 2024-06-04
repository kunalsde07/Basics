#include<bits/stdc++.h>
using namespace std;

int main(){
    /*
    A school has following rules for grading system:
    1. Below 25 -> F
    2. 25 to 44 -> E
    3. 45 to 49 -> D
    4. 50 to 59 -> C
    5. 60 to 70 -> B
    6. 80 to 100 -> A
    Ask user to enter marks and print the corresponding grade
    */

    int marks;
    cin >> marks;

    if(marks >= 0 && marks <= 100){
        if(marks < 25){
            cout << "Grade 'F'";
        }else if(marks <= 44){
            cout << "Grade 'E'";
        }else if(marks <= 49){
            cout << "Grade 'D'";
        }else if(marks <= 59){
            cout << "Grade 'C'";
        }else if(marks <= 70){
            cout << "Grade 'B'";
        }else{
            cout << "Grade 'A'";
        }
    }else{
        cout << "!! Invalid Marks !!";
    }

    return 0;

}