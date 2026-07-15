#include<iostream>
using namespace std;


void findGrade(int marks){
    if(marks>90 && marks<=100){
        cout<<"A++"<<endl;
    }
    else if(marks>80 && marks<=90){
        cout<<"A+"<<endl;;
    }
    else if(marks>70 && marks<=80){
        cout<<"A"<<endl;;
    }
    else{
        cout<<"lets explore youre interest area";
    }
}

int main(){
    int student1=90;
    int student2=93;
   // char student2 = 'as';

    findGrade(student1);
    findGrade(student2);

    return 0;
}