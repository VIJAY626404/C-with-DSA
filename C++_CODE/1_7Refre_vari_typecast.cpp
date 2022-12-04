//*******Build data type*********
// #include<iostream>
// using namespace std;
// int c = 100;
// int main(){
//     int a, b, c;
//     cout<<"Enter the value of a is :"<<endl;
//     cin>>a;
//     cout<<"Enter the value of b is :"<<endl;
//     cin>>b;
//     c = a+b;
//     cout<<"The value of c is: "<<c<<endl;
//     cout<<"The global value of c is: "<<::c<<endl;     //------>scoop revulation operator****
//     return 0;
// }

// ******float, double and long double Literals*****
#include<iostream>
using namespace std;
int main(){
    float d= 34.5;
    long double e = 34.5;
    cout<<"The size of 34.5 is :"<<sizeof(34.5)<<endl;
    cout<<"The size of 34.5f is :"<<sizeof(34.5f)<<endl;
    cout<<"The size of 34.5F is :"<<sizeof(34.5F)<<endl;
    cout<<"The size of 34.5l is :"<<sizeof(34.5l)<<endl;
    cout<<"The size of 34.5L is :"<<sizeof(34.5L)<<endl;
    cout<<"The size of 34.5 is :"<<sizeof(34.5)<<endl;
    cout<<"The value of d is :"<<d<<endl<<"The value of e is :"<<e;

return 0;
}
// *******Reference variables**********
// Rohan------->Monty------>Rohu------->Dangerous coder
// #include<iostream>
// using namespace std;
// int main(){

//     float x= 455;
//     float & y = x;
//     cout<<x<<endl;
//     cout<<y<<endl;
    
// return 0;
// }

//********Typecasting******** change any variable in another variable
// #include<iostream>
// using namespace std;
// int main(){
//     int a= 45;
//     float b = 45.46;
//     cout<<"The value of a is :"<<(float)a<<endl;
//     cout<<"The value of a is :"<<float(a)<<endl;

//     cout<<"The value of b is :"<<int(b)<<endl;
//     cout<<"The value of b  is :"<<(int)b<<endl;
//     int c= int(b);

//     cout<<"The expression is :"<<a+b<<endl;
//     cout<<"The expression is :"<<a+int(b)<<endl;
//     cout<<"The expression is :"<<a+(int)b<<endl;


    
// return 0;
// }