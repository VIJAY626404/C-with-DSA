#include<iostream>
using namespace std;

int main(){
    // what is pointer-----> data type which holds the address of other data types
    int a= 5;
    int *b=&a;
    cout<<"The address of a is : "<<&a<<endl;
    cout<<"The address of a is : "<<b<<endl;
//&----> (Address of) operator
// *----> (value of) Dereference operator
cout<<"The value at address b is :"<<*b<<endl;
// Pointer to Pointer
int **c = &b;
cout<<"The address of b is :"<<&b<<endl;
cout<<"The address of b is :"<<c<<endl;
cout<<"The value at address c is :"<<*c<<endl;
cout<<"The value at address value at c is :"<<**c<<endl;
     return 0;
}