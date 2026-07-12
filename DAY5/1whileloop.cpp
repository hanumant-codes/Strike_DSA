#include<iostream>
using namespace std;

int main(){
       int i = 0;

   while(i<10){
    cout<<i<<" ";
    i++;
   }
   cout<<endl;

   //reverse a number using while loop

    int num = 23154;
    int ans = 0;


    while(num!=0){
        // fetch last digit
        int lastDigit = num%10;
        num = num/10;

        ans = ans*10+lastDigit;
    }

   cout<<ans<<endl;

   

}