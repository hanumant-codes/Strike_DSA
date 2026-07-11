#include<iostream>
using namespace std;

int main() {

  // Bitwise operator
  // &  |  ^(xor)

  int a = 10;
  int b = 5;

  cout<<(a & b)<<endl; // 0 = 1010(10) & 0101(5) = 0000(0)
  cout<<(a | b)<<endl; // 15 = 1010(10) | 0101(5) = 1111(15)
  cout<<(a ^ b)<<endl; // 15 = 1010(10) ^ 0101(5) = 1111(15) if both bit same then it will return 0 else it will return 1


  return 0;


}