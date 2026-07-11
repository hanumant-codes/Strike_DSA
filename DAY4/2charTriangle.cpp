#include<iostream>
using namespace std;



int main(){

    for(int j=0; j<5; j++){
        char name = 'A'+j-1;
        for(int i=0; i<j; i++){
            cout<<name;
        }
        cout<<endl;
    }


    for(char j='B'; j<'G'; j++){
        for(char i='A'; i<j; i++){
            cout<<i;
        }
        cout<<endl;
    }
    for(char i='A'; i<'B'; i++){
        cout<<i;
    }
    cout<<endl;

    for(char i='A'; i<'C'; i++){
        cout<<i;
    }
    cout<<endl;

    for(char i='A'; i<'D'; i++){
        cout<<i;
    }
    cout<<endl;

    for(char i='A'; i<'E'; i++){
        cout<<i;
    }
    cout<<endl;
    return 0;
}