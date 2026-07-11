#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter number:";
    cin>>num;
    cout<<"enterd num is : "<<num;


    int num1, num2;
    cout<<"enter two numbers: ";
    cin>>num1>>num2;
    cout<<"sum is :"<<num1+num2;

    int age;
    cout<<"enter youre age: ";
    cin>>age;


    if(age >= 18){
        cout<<"you are eligible to vote";
    }
    else{
        cout<<"youre not eligible to vote";
    }

    for(int i=0; i<143; i++){
        cout<<"i am missing you sweetie\n";
    }


    for(int i=0; i<5; i++){
        for(int j=1; j<=5; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    for(int i=0; i<=10; i++){
        if(i%2==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;

    int sum = 0;
    for(int i=0; i<=10; i++){
        sum = sum + i;
        cout<<sum<<" ";
    }
    cout<<endl;

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=0; i<5; i++){
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=5; i>0; i--){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int j=0; j<6-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }


    for(int i=5; i>0; i--){
        for(int j=0; j<i; j++){
            cout<<"*";
        }
        cout<<endl;

    }

    for(int i=1; i<=25; i+=5){
        for(int j=i; j<=i+4; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }


    return 0;

}

// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
// 0 2 4 6 8 10 
// 0 1 3 6 10 15 21 28 36 45 55 
// *****
// *****
// *****
// *****
// *****

// *
// **
// ***
// ****
// *****
//      *
//     **
//    ***
//   ****
//  *****
// *****
// ****
// ***
// **
// *
// 1 2 3 4 5 
// 6 7 8 9 10 
// 11 12 13 14 15 
// 16 17 18 19 20 
// 21 22 23 24 25 
// 1
// 01
// 101
// 0101
// 10101
// A
// BB
// CCC
// DDDD
// A
// AB
// ABC
// ABCD
// ABCDE
//     1
//    121
//   12321
//  1234321
// 123454321
// print a prime number or not

