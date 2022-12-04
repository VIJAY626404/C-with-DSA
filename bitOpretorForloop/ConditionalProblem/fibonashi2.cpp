#include<iostream>
using namespace std;

int main(){
    int  n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int a= 0;
    int b= 1;
    cout<< a<<" "<<b<<endl;
    for(int i=1; i<=n; i++){
        int Nextnumber= a+b;
        cout<<Nextnumber<<" ";
        a=b;
        b=Nextnumber;
    }
    return 0;
}