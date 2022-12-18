//  implementation of queue STL in C++
#include<iostream>
#include<queue>
using namespace std;

int main(){
     queue<int >l;
    l.push(1);
    l.push(5);
    l.push(4);
    l.push(2);
    l.push(6);
    l.push(11);
    l.push(0);
    l.push(8);
    l.push(1);
    l.push(8);
    cout<<" size of list is: "<<l.size()<<endl;
    cout<<" front element of queue is : "<<l.front()<<endl;
    l.pop();
    cout<<" Rear element of queue is : "<<l.back()<<endl;
    cout<<" after pop operation  size is : "<<l.size()<<endl;
   
    return 0;
}