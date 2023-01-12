//  given an array of integer 'a' move all the even integers at the  begining of the array followed by odd integers. the relative order of odd or even  doesn't matter. return array with satisfi the condition 
//  two pointer approach
#include<iostream>
#include<vector>
using namespace std;
void sortEvenOdd(vector<int>&v){
    //  here by referrence we are passed value
    int s= 0, e = v.size()-1;
    while(s<e){
        if(v[s]%2==1 && v[e]%2==0){
            swap(v[s],v[e]);
            s++;
            e--;

        }
        if(v[s]%2==0){
            s++;
        }
        if(v[e]%2==1){
            e--;
        }
    }
        return ;
}

int main(){
    vector<int>v;
    int n; 
    cout<<"Enter the size of array :"<<endl;
    cin>>n; 
    for(int i=0; i<n; i++){
        int ele;
        cin>>ele; 
        v.push_back(ele);
    }
    sortEvenOdd(v);
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    
    return 0;
}