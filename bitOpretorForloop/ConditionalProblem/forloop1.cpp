#include<iostream>
using namespace std;

int main(){
    int n, i;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
        int sum=0;
    for(int i=1;i<=n; i++){
        cout<<i<<endl;
        sum= sum+i;
    }
    cout<<"sum of natural number is :"<< sum<<endl;
       
    return 0;
}