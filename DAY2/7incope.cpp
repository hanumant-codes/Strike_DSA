#include<iostream>
using namespace std;

int main() {

    int a = 19;

    int b = a++;

    cout<<b<<endl; //19
    cout<<a<<endl; //20
    //    pre increment , post incremenet
   //     pre decrement, post decrement
   
   int b = --a;

   cout<<b<<endl; //19
    cout<<a<<endl;

}