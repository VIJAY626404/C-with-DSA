// write a programe to print prime number
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool isPrime= 1;
    for(int i=2;i<n; i++){
        if(n%i==0){
            // cout<< n<<" is not prime number"<<endl;
            isPrime= 0;
            break;
        }
    }
        if(isPrime==0){
            cout<< "not a prime number"<<endl;
        }
        else{
            cout<<" This is a prime number"<<endl;
        }
    
    return 0;
}