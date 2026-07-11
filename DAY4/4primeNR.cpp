#include<iostream>
using namespace std;

// A Prime Number is a whole number (integer) that is greater than 1 and 
// has exactly two distinct factors (divisors): 1 and the number itself.

int main(){
    cout<<"enter number: ";
    int num;
    cin >> num;

    // Numbers less than 2 are NOT prime
    if (num <= 1) {
        cout << "Not a prime number";
        return 0; // Stop the program immediately
    }

    // Check divisibility from 2 up to num-1
    // For num = 2, this loop won't run (because 2 <= 1 is false), 
    // so it will correctly go to "prime Number".
    for(int i = 2; i <= num - 1; i++){
        if(num % i == 0){
            cout << "Not a prime number";
            return 0; // Stop if we find a factor
        }
    }

    // If we made it here, it's prime
    cout << "Prime Number";
    return 0;
}