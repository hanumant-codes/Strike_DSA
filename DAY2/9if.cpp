#include<iostream>
using namespace std;

int main() {

    int age;
     cout << "enter your age: ";
     cin >> age;

     if(age >= 18) {
         cout << "you are eligible to vote" << endl;
     }
     else {
         cout << "you are not eligible to vote" << endl;
     }


     int marks;
      cout << "enter your marks: ";
      cin >> marks;

      if(marks >= 90 && marks <= 100) {
          cout << "grade A";
      }
      else if(marks >= 80 && marks < 90) {
          cout << "grade B";
      }
      else if(marks >= 70 && marks < 80) {
          cout << "grade C";
      }
      else if(marks >= 60 && marks < 70) {
          cout << "grade D";
      }
      else if(marks > 100) {
            cout << "invalid marks";
      }
      else {
          cout << "grade F";
      }

return 0;

}