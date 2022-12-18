//  implementation of list STL in C++
#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int >l;
    l.push_back(1);
    l.push_back(5);
    l.push_back(4);
    l.push_back(2);
    l.push_back(6);
    l.push_back(11);
    l.push_back(0);
    l.push_back(8);
    l.push_back(1);
    l.push_back(8);
    cout<<" size of list is: "<<l.size()<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.pop_back();
  l.erase(l.begin());
  l.erase(l.end());
  cout<<"After erase size of list is :"<<l.size()<<endl;
  
 
    return 0;
}