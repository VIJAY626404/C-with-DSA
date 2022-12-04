#include<iostream>
using namespace std;

    int factorial(int n){
        int fact =0;
        for(int i =1; i<=n; i++){
            fact =fact*i;
        }
            return fact;
        }
        int ncr(int n, int r){
            int nume = factorial(n);
            int denume = (factorial(r)*factorial(n-r));
            int ncr = nume/denume;
            return ncr;
        }
int main(){
    int a, b;
     cin>>a>>b;
     int answer = ncr(a,b);
     cout<<answer<<endl;
    return 0;
}
