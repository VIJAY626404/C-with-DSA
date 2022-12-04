//  we can't create same variable in one block but we can create same variable in different block is called scope
#include<iostream>
using namespace std;

int main(){
    int a= 5;
    cout<<a<<endl;
    if(true){
    int a = 9;
    cout<<a<<endl;
}
cout<<a<<endl;
    return 0;
}


//  operator presidence