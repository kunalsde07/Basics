#include<iostream>
using namespace std;

int main(){
    //int, long, long long, float, double
    //string, getline()
    //char

    /*
        int -> 4 byte -> -10^9 to 10^9
        long -> 4 byte -> -10^12 to 10^12
        long long -> 8 byte -> -10^18 to 10^18
        float -> 4 byte, double -> 8 byte
        char -> 1 byte -> -127 to 127 or 
    */

   int n1=10;
   long n2=10;
   long long n3=10;
   float n4=10.5534618349010;
   double n5=10.234324612564260237;
   char c='5';
   string s="hey";
   cout<< n1 << "...." << sizeof(n1) << endl;
   cout<< n2 << "...." << sizeof(n2) << endl;
   cout<< n3 << "...." << sizeof(n3) << endl;
   cout<< n4 << "...." << sizeof(n4) << endl;
   cout<< n5 << "...." << sizeof(n5) << endl;
   cout<< c << "...." << sizeof(c) << endl;
   cout<< s << "...." << sizeof(s) << endl;


    return 0;
}