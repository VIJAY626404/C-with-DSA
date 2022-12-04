#include<iostream>
using namespace std;
int power(){
    int num1, num2;
    cin>>num1>>num2;
    int ans =1;
    for(int i=1; i<=num2;i++){
        ans = ans*num1;
    }
    return ans;
}

int main(){
    int answer = power();
    // cout<<num1<<" of power"<<num2<<" is"endl;    here we can't call value of num1 and num2
    cout<<" power is : "<<answer<<endl;
    return 0;
}