#include<iostream>
#include<math.h>
using namespace std;
int checkprimenumber(int n);
// int checkarmstrongnumber(int n);
int main(){
    int num,i, prime=1;
    cout<<"Enter the value of number \n";
    cin>>num;
    if(num==0 || num==1){
        prime =0;
    }
    for(i=2;i<num; i++){
        if(num%i==0){
            prime=0;
            break;
          
        }

    }
    if(prime==0){
        cout<<"This is not prime number";
    }
    else if(prime==1){
        cout<<num<<endl<<"is prime number";
    }
}