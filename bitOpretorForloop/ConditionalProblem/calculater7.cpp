//  write a program to create a calculator
#include<iostream>
using namespace std;

int main(){
    int a, b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    char op;
    cout<<" Enter operation what do you want perform"<<endl;
    cin>>op;
    switch (op)
    {
    case '+' :
    cout<<(a+b+c)<<endl;
        break;
    case '-' :
    cout<<(a-b-c)<<endl;
        break;
    case '*' :
    cout<<(a*b*c)<<endl;
        break;
    case '/' :
    cout<<(a/b/c)<<endl;
        break;
  
    case '%' :
    cout<<(a%b%c)<<endl;
        break;
    
    default:
    cout<<" You want to perform invalid operation";
        break;
    }

    return 0;
}