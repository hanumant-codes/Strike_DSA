#include<iostream>
using namespace std;

//declare and define = 
//return type(void), function name, parameter
 int factorial(int n){

    int facto = 1;
    for(int i=1; i<=n; i++){
        facto*=i;
    }
    //cout<<facto<<endl;
    return facto;
    
   }

   void sum(int a, int b){
    cout<<a+b<<endl;
   }

int main(){

    int num = 1, num2 = 2, num3 = 3;
    int fact = 1;

    int answer1 = factorial(num);
    int answer2 = factorial(num2); //num2= argument
    int answer3 = factorial(num3);

    cout<<answer1<<endl;
    cout<<answer2<<endl;
    cout<<answer3<<endl;


    sum(2,2);

    // for(int i=1; i<=num; i++){
    //     fact*=i;
    // }
    // cout<<fact;

    // cout<<endl;

    // for(int i=1; i<=num2; i++){
    //     fact*=i;
    // }
    // cout<<fact;

    // cout<<endl;

    // for(int i=1; i<=num3; i++){
    //     fact*=i;
    // }
    // cout<<fact;

    

return 0;
}