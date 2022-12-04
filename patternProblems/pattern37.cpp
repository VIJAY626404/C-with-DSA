//  write a program to print pattern
// * * *
// * * *
#include<iostream>
using namespace std;

int main(){
    // int x =65;
    // cout<<(char)x<<endl;
    // char ch = 'a';
    // cout<<(int)(ch)<<endl;
    int a,b;
    cin>>a>>b;
    for(int i =1; i<=a; i++){
        for(int j =1; j<=b; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}