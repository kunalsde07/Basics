#include<bits/stdc++.h>
using namespace std;

// Pass by value
// The function only takes the copy value from the original variable address
void doSomething(string s){
    s[0] = 'R';
    cout << s << endl;
}

// Pass by referrencce
// The function take the original value and also change the original value of variable address
// Where in array always sent by referrence 
void doSomething2(string &s){
    s[0] = 'Y';
    cout << s << endl;
}


int main(){

    string s;
    cin >> s;
    doSomething(s);
    cout << "After using Pass by value function" << endl;
    cout << s << endl;
    cout << endl;

    cout << s << endl;
    doSomething2(s);
    cout << "After using Pass by referrence function" << endl;
    cout << s << endl;
    cout << endl;

    return 0;

}