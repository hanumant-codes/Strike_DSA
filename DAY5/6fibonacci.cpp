// #include<iostream>
// using namespace std;



//     int fib(int n) {
//         if(n <= 1) {
//             return n;
//         }

//     int first = 0, second = 1;
//     for(int i=2; i<=n; i++){
//         int curr = first + second;
//         first = second;
//         second = curr;
//     }
// return second;

// }

#include<iostream>
using namespace std;

int main(){
    
//    edge case
    int num;
    cout<<"Give number: ";
    cin>>num;

    long long fact = 1;

    for(int i=1;i<=num;i++){
        fact = fact*i;
    }

     
    // fact = 0


    cout<<fact<<endl;
}

