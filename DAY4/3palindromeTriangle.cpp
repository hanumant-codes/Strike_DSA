#include<iostream>
using namespace std;

int main(){

    // 4 space & print 1
    // 3 space & print 121
    // 2 space & print 12321
    // 1 space & print 1234321
    // 0 space & print 123454321

    for(int i=4; i>=0; i--){
// space print
         for(int j=1; j<=i; j++){
         cout<<" ";
    }
//number printing in increasing order
    for(int j=1; j<=5-i; j++){
        cout<<j;
    }
//decreasing number just after hiring order
    for(int j=5-i-1; j>=1; j--){
        cout<<j;
    }

    cout<<endl;
    }




    for(int j=1; j<=4; j++){
        cout<<" ";
    }

    for(int j=1; j<=1; j++){
        cout<<j;
    }
cout<<endl;

    for(int j=1; j<=3; j++){
        cout<<" ";
    }
    for(int j=1; j<=2; j++){
        cout<<j;
    }
    for(int j=1; j>=1; j--){
        cout<<j;
    }
cout<<endl;

    for(int j=1; j<=2; j++){
        cout<<" ";
    }
     for(int j=1; j<=3; j++){
        cout<<j;
    }
    for(int j=2; j>=1; j--){
        cout<<j;
    }
cout<<endl;

     for(int j=1; j<=1; j++){
        cout<<" ";
    }
     for(int j=1; j<=4; j++){
        cout<<j;
    }
    for(int j=3; j>=1; j--){
        cout<<j;
    }
cout<<endl;


    // pattern analyzation

    // space decrement 
    // and number in increment * decrement

}