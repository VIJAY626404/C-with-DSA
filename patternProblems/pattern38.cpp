#include<iostream>
using namespace std;

int main(){
    int n; 
    cin>>n;
    char ch = 'A';
   for(int i =1; i<=n ; i++){
    for(int j = 1; j<=n; j++){
        int doller = '$';
        if(i==1|| i==n|| j==1|| j==n){
            cout<<ch;
            ch++;
        }
        else{
            cout<<char(doller);
        }
    }
    cout<<endl;
   }
    return 0;
}