#include<iostream>
using namespace std;

int main() {

    int a = 19;
    int b = 20;

// Logical operator
// && (and) : Both side should be true--> Then only true, else false
// || (or): If both side is false--> Then only false, else true
// ! (Not perator): (Reverse)

 cout<<(true && true)<<endl; //1
 cout<<(true && false)<<endl; //0   
 cout<<(false && false)<<endl; //0
 cout<<(true || true)<<endl; //1
 cout<<(true || false)<<endl; //1
 cout<<(false || false)<<endl; //0
 cout<<(!true)<<endl; //0
 cout<<(!false)<<endl; //1




}