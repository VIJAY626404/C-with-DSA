
// There are two types of header files;
//1. System header file: it come with the compiler
// #include<iostream>
// //2. User defined header file: It is written by the programmer
// //#include"this.h" ------> This will produce an error if this.h is no presant in the current directory
// using namespace std;
// int main(){
// //std:: cout<<"This is vijay kumar shah"; --------> std:: will replace using namespace std;
// cout<<"This is vijay kumar shah";

//     return 0;
// }

//*************************************************************************************************************
//*************************************************************************************************************
#include<iostream>
using namespace std;
int main(){
    int a= 5, b= 6;
    // cout<<"Operators in C++ programming"<<endl;
    // cout<<"Following types of operators in c++"<<endl;
    // // Arthmatic Operators....
    // cout<<"The value of a+b is :"<<a+b<<endl;
    // cout<<"The value of a-b is :"<<a-b<<endl;
    // cout<<"The value of a*b is :"<<a*b<<endl;
    // cout<<"The value of a/b is :"<<a/b<<endl;
    // cout<<"The value of a%b is :"<<a%b<<endl;
    // cout<<"The value of a++ is :"<<a++<<endl;
    // cout<<"The value of a+b is :"<<a+b<<endl;
    // cout<<"The value of a-- is :"<<a--<<endl;
    // cout<<"The value of ++a is :"<<++a<<endl;
    // cout<<"The value of --a is :"<<--a<<endl;
    cout<<endl;

    // Assignment operator--->used to asign to value to variables
    // int a=3, b=9;
    // char d= 'd';
    //Comparision operators
    // cout<<"Following are  the comparasion operator is :"<<endl;
    // cout<<"The value of a==b is :"<<(a==b)<<endl;
    // cout<<"The value of a!=b is :"<<(a!=b)<<endl;
    // cout<<"The value of a>=b is :"<<(a>=b)<<endl;
    // cout<<"The value of a<=b is :"<<(a<=b)<<endl;
    // cout<<"The value of a>b is :"<<(a>b)<<endl;
    // cout<<"The value of a<b is :"<<(a<b)<<endl;
    
    //*****Logical operator
    cout<<"Followings are the logical operator is :"<<endl;
    cout<<"The value of ((a==b)&&(a<b)) logical and  operator is :"<<((a==b)&& (a<b))<<endl;
    cout<<"The value of ((a==b)or(a<b)) logical or operator is :"<<((a==b)||(a<b))<<endl;
    cout<<"The value of (!(a==b))logical not operator is :"<<(!(a==b))<<endl;
    
    return 0;
}