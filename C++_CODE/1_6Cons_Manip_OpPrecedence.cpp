// cccccConstantccccc
// #include<iostream>
// using namespace std;
// int main(){
//     int a= 45;
//     cout<<"The value of a was:"<< a<<endl;
//     a = 55;
//     cout<<"The value of a is:"<<a<<endl;
   // const int a= 45;
    // cout<<"The value of a was:"<< a<<endl;
    // a = 55;  // you will get an error because a is a constant
    // cout<<"The value of a is:"<<a<<endl;

    return 0;
}

// ****maniplators***
// #include<iostream>
// #include<iomanip>
// using namespace std;
// int main(){
//     int a = 1, b= 12, c = 123, d = 1234, e = 12345;
//     cout<<" Value of a is without setw is :"<<a<<endl;
//     cout<<" Value of b is without setw is :"<<b<<endl;
//     cout<<" Value of c is without setw is :"<<c<<endl;
//     cout<<" Value of d is without setw is :"<<d<<endl;
//     cout<<" Value of e is without setw is :"<<e<<endl;
//     // *****After apply setw******
//     cout<<" Value of a is  setw is :"<<setw(5)<<a<<endl;
//     cout<<" Value of b is  setw is :"<<setw(5)<<b<<endl;
//     cout<<" Value of c is  setw is :"<<setw(5)<<c<<endl;
//     cout<<" Value of d is  setw is :"<<setw(5)<<d<<endl;
//     cout<<" Value of e is  setw is :"<<setw(5)<<e<<endl;
//     return 0;
// }

// // @@@@ Operator precidence@@@@
#include<iostream>
using namespace std;
int main(){
int a = 4, b = 5;
//int c = (a*5)+b;
int c = ((((a*5)+b)- 45)+87);
cout<<"The value of c is :"<<c<<endl;

    return 0;
}