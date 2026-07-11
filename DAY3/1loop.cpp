#include<iostream>
using namespace std;

int main(){

//even numbers 

    for (int i=2; i<=20; i=i+2){
        cout<<i<<"\n";
    }   

    // for(int i=1; i<=20; i++){
    //     if(i%2==0){
    //         cout<<i<<"\n";
    //     }
    // }

    //odd numbers
    for(int i=1; i<=20; i=i+2){
        cout<<i<<"\n";
    }


//alphabets
    for(char alpha='a'; alpha<='z'; alpha++){
        cout<<alpha<<"\n";
    }

    // sum of first 10 natural numbers
    int sum = 0;
    for(int i=1; i<=10; i++){
        sum = sum + i; // 0 1 3 6 10 15 21 28 36 45 55
    }
    cout<<sum<<"\n";

//sum of squares of first 10 natural numbers

    int sumOfSquares = 0;
    for(int i=1; i<=10; i++){
        sumOfSquares = sumOfSquares + (i*i); // 0 1 5 14 30 55 91 140 204 285
    }
    cout<<sumOfSquares<<"\n";

//printing 1-5 6times

    for(int i=1; i<=5; i++){
        cout<<i<<" ";
    }
    cout<<endl;

    for(int i=1; i<=5; i++){
        cout<<i<<" ";
    }
    cout<<endl;

    for(int i=1; i<=5; i++){
        cout<<i<<" ";
    }
    cout<<endl; 

    for(int i=1; i<=5; i++){
        cout<<i<<" ";
    }
    cout<<endl;

    for(int i=1; i<=5; i++){
        cout<<i<<" ";
    }
    cout<<endl; 

    for(int i=1; i<=5; i++){
        cout<<i<<" ";
    }
    cout<<endl;

//nested loop
    for(int j=1; j<=5; j++){ // it start like this j=1 then j<=5 then it goes to for(int i=1; i<=5; i++)
        for(int i=1; i<=5; i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }


    for(int j=1; j<=5; j++){
    for(char i='a'; i<='e'; i++){
        cout<<i<<"";
    }
    cout<<endl;
    }

// 10 to 1 

    for(int i=10; i>=1; i--){
        cout<<i<<" ";
    }

    return 0;
}