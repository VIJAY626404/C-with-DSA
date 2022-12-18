//  implementation of vector STL in C++
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int >v;
    v.push_back(2);
    v.push_back(3);
    cout<<" capacity is : "<<v.capacity()<<endl;
    v.push_back(4);
    cout<<" capacity is : "<<v.capacity()<<endl;
    v.push_back(1);
    v.push_back(8);
    cout<<" capacity is : "<<v.capacity()<<endl;
    v.push_back(33);
    v.push_back(37);
    v.push_back(22);
    v.push_back(12);
    int size = v.size();
    cout<<" size of vector is: "<<size<<endl;
    for(int i =0; i<size; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"Front element is : "<<v.front()<<endl;
    cout<<"Last element is : "<<v.back()<<endl;
    v.pop_back();
   v.pop_back();
   int size1= v.size();
   cout<<" size is a given "<<size1<<endl;
   for(int i =0; i<size1; i++){
        cout<<v[i]<<" ";
    }
   v.clear();

   cout<<" after clear size of vector is "<<v.size()<<"  capacity is "<<v.capacity()<<endl;;
   
    return 0;
}