// write a program to print decimal to binary
#include<iostream>
// #include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int power =1, ans =0;
    while(n>0){
        int digit = n%2;
        ans+= digit*power ;
        power = power*10;
        n/= 2;
        
    }
    cout<<" Binary number is : "<< ans;
   
 }