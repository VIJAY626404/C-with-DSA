//  implementation of deque STL in C++
#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int >d;
    d.push_back(1);
    d.push_front(2);
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<" First index element is : "<<d.at(1)<<endl;;
    cout<<" Front : "<<d.front()<<endl;;
    cout<<" Back : "<<d.back()<<endl;
    cout<<"Before erase size is : "<<d.size()<<endl;
    d.erase(d.begin()+1);
    cout<<"After erase size is : "<<d.size()<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    return 0;
}