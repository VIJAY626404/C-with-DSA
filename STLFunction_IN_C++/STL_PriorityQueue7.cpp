//  implementation of Priority queue STL in C++
#include<iostream>
#include<queue>
using namespace std;

int main(){ 
    //  max heap
    // first element is always greater heap
    priority_queue<int >maxi; 
    //  mean heap
    priority_queue<int, vector<int>,greater<int >>mini;
    maxi.push(2);
    maxi.push(4);
    maxi.push(0);
    maxi.push(9);
    maxi.push(6);
    maxi.push(5);
    int size = maxi.size();
    cout<<" size of queue is : "<<size<<endl;
    for(int i =0; i<size; i++){
        cout<<maxi.top()<<" ";
      
    }
    cout<<" maxi empty or not "<<maxi.empty()<<endl;

     mini.push(2);
    mini.push(4);
    mini.push(0);
    mini.push(9);
    mini.push(6);
    mini.push(5);
    int n =mini.size();
    for(int i =0; i<n; i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;
    cout<<" empty or not "<<mini.empty()<<endl;

    
    
    return 0;
}