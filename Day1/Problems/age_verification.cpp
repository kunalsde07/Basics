#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
    Take the age from the user and then decide accordingly
    1. If age < 18, print -> "not eligible for job".
    2. If age >= 18, print ->  "eligible for job".
    3. If age >= 55 and age <= 57,
       print -> "eligible for job, but retirement soon".
    4. If age > 57, print -> "!! Retirement Time !!".
    */

    int myAge;
    cin >> myAge;

    if(myAge < 18){
        cout << "Not Eligible for Job !!";
    }else{
        if(myAge >= 55 && myAge <= 57){
            cout << "Eligible for Job, but retiremain soon";
        }else if(myAge > 57){
            cout << "!! Retirement Time !!";
        }else{
            cout << "Eligible for Job !!";
        }
    }

    return 0;
}