#include<iostream>
using namespace std;
int power(int a, int b){
    //  there no compulsory for to take same variable in both function
    //  we can't call value of other function in another function
    int ans =1; 
    for(int i =1; i<=b; i++){
        ans = ans*a;
    }
    return ans;
}

int main(){
    int x, y;
    cin>>x>>y;
    int answer = power(x,y);
    cout<<" Answer is : "<<answer<<endl;

    return 0;
}