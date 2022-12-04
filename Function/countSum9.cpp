#include<iostream>
using namespace std;
int sumNatural(int n){
    cin>>n;
    int sum =0;
    for(int i =1; i<=n; i++){
        sum = (i*i+i)/2;
        if( sum ==n){
           
            return i;
        }
        
    }
    return -1;
}

int main(){
    int a; 
  int answer = sumNatural(a);
 cout<<answer;
    
}