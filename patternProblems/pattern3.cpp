// wap to pring pattern
// 1  2  3  4
// 1  2  3  4
// 1  2  3  4
// 1  2  3  4
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<j<<"  ";
            j=j+1;
        }
        cout<<endl; 
    
        i=i+1;
    }
    return 0;
}