#include<bits/stdc++.h>
using namespace std;


// void function -> does not return anything
// Also no parameter
void printName(string name){
    cout << "Hey " << name << " !";
}

// Return integer output
int add(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}
int muliply(int a, int b){
    return a*b;
}
float div(int a, int b){
    return a/b;
}

// return boolean value
bool is_Age(int age){
    return (age >= 18) ? 1 : 0;
}

int main(){
    string name;
    // cin >> name;
    // printName(name);
    int a, b;
    // cin >> a >> b;
    // cout << add(a,b);
    // cout << sub(a,b);
    // cout << muliply(a,b);
    // cout << div(a,b);

    int age;
    cin >> age;
    if(is_Age(age))
        cout << "You are Eligible";
    else
        cout << "Not eligible";
    return 0;
}