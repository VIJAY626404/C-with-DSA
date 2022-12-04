//  write a program to sum of digit in given number
#include<iostream>
using namespace std;

int main(){
    int num; 
    cin>>num;
    int sum=0;
    while(num>0){
        int lastdigit = num%10;
        num = num/10;
        sum = sum+lastdigit ;

    }
    cout<<sum<<endl;
   
    return 0;
}