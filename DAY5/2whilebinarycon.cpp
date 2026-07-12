#include<iostream>
using namespace std;

//binary conversion using while loop
int main(){
//     int num = 256, ans = 0;

//       while(num!=0){
//     // reminder
//     int rem = num%2;
//     //devide 
//      num = num/2;

//     ans = ans*10+rem;
//    }

//     //    reverse
     
//      num = ans;
//      ans = 0;
   

//        while(num!=0){
//         // fetch last digit
//         int lastDigit = num%10;
//         num = num/10;

//         ans = ans*10+lastDigit;
//     }

//    cout<<ans<<endl;

   int num=768, ans=0, mul=1;
   while(num!=0){
    int rem = num&1;
    num=num>>1; // Right shift by 1 bit (equivalent to num/2)
    ans = ans+rem*mul;
    mul = mul*10;
   }

   return 0;

}