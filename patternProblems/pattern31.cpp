//  write a program to print pyromid pattern
#include<iostream>
using namespace std;

int main(){
    int n; 
    cin>>n;
    for( int i =1; i<=n;i++){
        int space = 1;
        for(space =1; space<=n-i; space++){
            cout<<" ";
        }
        for(int j =1; j<=i; j++){
            cout<<"*";
        }
        for(int third =1; third<=i-1; third++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}