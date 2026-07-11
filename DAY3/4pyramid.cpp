#include<iostream>
using namespace std;

int main(){
    for(int i=1; i<=21; i=i+5){
    for(int j=i; j<=i+4; j++){
        cout<<j<<" ";
    }
    cout<<endl; 
} 

return 0;
}