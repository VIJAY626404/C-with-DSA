#include<iostream>
using namespace std;
bool isPrime( int n){
    int sum =0;
    for( int i=2; i<n; i++){
        if(n%i!=0){
            sum = sum+i;
            cout<<sum;

            return 1;
        }
        else{
            return 0;
        }
    }
}


int main(){
    int a ;
    cin>>a;
    if(isPrime(a)){
        cout<<a<<" is prime number";
    
    }
    else{
        cout<<a<<" is not prime number";
        
    }

    
    return 0;
}