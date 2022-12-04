#include<iostream>
using namespace std;
// function signature
void printCounting(int a){
    //  function body
    for( int i=1; i<=a; i++){
        cout<<i<<" ";
    }
}

int main(){
    int n ;
    cin>>n;
    //  function calling
 printCounting(n);
    
    return 0;
}