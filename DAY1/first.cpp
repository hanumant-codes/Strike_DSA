#include<iostream> // library - it holds the meaning of std::cout, std::cin, std::endl
using namespace std; // it helps to avoid writing std:: before cout, cin, endl


int main(){
    
    // Number
    // int : 4byte
    // float: 4byte
    // char: 1byte
    // boolean: 1byte
    int a = 327;
    float b = 2.41;
    char c = 'a';
    bool num = false;
    long long d = 327298314793712; // to save the more than 4 byte number we use long long data type
    string name = "Rohit Negi";

    cout<<"Hello World"<<endl; // endl is used to print in new line

    cout<<a<<endl; // 327

    cout<<sizeof(a)<<endl; //4 

    cout<<name.length()<<endl; //10

    return 0;
}