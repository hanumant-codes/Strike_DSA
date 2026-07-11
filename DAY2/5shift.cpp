#include<iostream>
using namespace std;

int main() {

    int a = 20 ;
    int b = 20;

 //  left shift

 a = a<<3; //20*2^3 = 160
 cout<<a<<endl;

 // Right shift
 a = a>>2; // a = 160 >> 2 
 cout<<a<<endl; // Since a is now 160, this is 160 / (2^2) = 160 / 4 = 40
 



}