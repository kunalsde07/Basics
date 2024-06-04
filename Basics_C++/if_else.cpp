#include<bits/stdc++.h>
using namespace std;

int main(){
    // Write a program that takes an input as age
    // Then print if you are adult or not

    int myAge;
    cin >> myAge;

    if(myAge >= 18){
        cout<< "You are an adult enjoy!";
    }else{
        cout<< "You are not an adult still enjoy!";
    }

    return 0;
}