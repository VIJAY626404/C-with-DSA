#include<iostream>
using namespace std;
int arthmaticSeries(int n){
    int nth_term = 3*n+7 ;
    return nth_term;
}

int main(){
    int x ;
    cin>>x;
   int result =arthmaticSeries(x);
   cout<<x<<"th term is " <<result<<endl;
    int series = 0;
    
    
    return 0;
}