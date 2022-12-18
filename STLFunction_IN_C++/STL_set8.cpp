//  implementation of set STL in C++
#include<iostream>
#include<set>
//  it's always store unique element, can't modify
using namespace std;

int main(){
    set<int>s;
    s.insert(5);
    s.insert(2);
    s.insert(5);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    s.insert(4);
    s.insert(3);
    s.insert(5);
    s.insert(0);
    s.insert(1);
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    set<int >:: iterator it= s.begin();
    it++;
    s.erase(it);
     for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<< " -5 is present or not in this set : "<<s.count()<<endl;
    set<int>:: iterator itr = s.find(5);
    for(auto it = itr; it!= s.end(); it++){
        cout<<it<<" ";
    }
    cout<<endl;
    
    return 0;
}