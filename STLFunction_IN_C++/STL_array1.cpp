//  implementation of array STL in C++
#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int ,5>arr= {1,2,3,4,5};
    int size = arr.size();
    for(int i =0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Element at 2nd index is : "<<arr.at(3)<<endl;
    cout<<"Array is empty or not : "<<arr.empty()<<endl;
    cout<<"First element is : "<<arr.front()<<endl;
    cout<<"Back element is : "<<arr.back()<<endl;

    
    return 0;
}

    
  

   
  