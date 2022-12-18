//  implementation of Stack STL in C++
#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string>s;
    s.push("vijay kumar shah");
    s.push("ambresh");
    s.push("prabhat");
    s.push("ajeet");
    cout<<"size of stack is : "<<s.size()<<endl;

    cout<<" top string is : "<<s.top()<<endl;
    s.pop();
    cout<<" top element is : "<<s.top()<<endl;
    cout<<" Stack empty or not : "<<s.empty()<<endl;
    
    return 0;
}