//  wap to print pattern
// 1
// 2  3
// 3  4  5 
// 5  6  7  8
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
   int  count= i;
        while(j<=i){
            cout<<count<<" ";
            count= count+1;
            // cout<<i+j-1<<"  ";
            
            j=j+1;
        }
        cout<<endl; 
    
        i=i+1;
    }
    return 0;
}