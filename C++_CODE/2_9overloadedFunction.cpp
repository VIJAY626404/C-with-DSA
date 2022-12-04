#include<iostream>
using namespace std;
// two arrguments are applied
int Sum( int a, int b){
   return a+b;
}
// three arrguments are applied
int Sum(int a, int b, int c){
    return (a+b+c);
}
// calculate the area of reactangle
int area(int l, int h){
    return(l*h);
}
int main(){
    cout<<"Sum of 3 and 5 is :"<<Sum(3,5)<<endl;
    cout<<"Sum of 3 ,5 and 6 is :"<<Sum(3,5,6)<<endl;
    cout<<"the area of reactagle  of 3 and 5 is :"<<area(3,5)<<endl;
    return 0;
}