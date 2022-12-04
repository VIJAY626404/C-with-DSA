//4590187292
#include<iostream>
using namespace std;

class Employee{
    private :
    int a, b, c;
    public :
    int d, e;
    void setData(int a1, int b1, int c1); // declaration
    void getData(){
        cout<<"The value of a is :"<<a<<endl;
        cout<<"The value of b is :"<<b<<endl;
        cout<<"The value of c is :"<<c<<endl;
        cout<<"The value of d is :"<<d<<endl;
        cout<<"The value of e is :"<<e<<endl;
        
    }
};
void Employee :: setData( int a1, int b1, int c1){
a = a1;
b = b1;
c = c1;

}

int main(){
    Employee vijay;
   // vijay.a = 23 // this will be show error because a is private
   vijay.d = 23;
   vijay.e = 24;
   vijay.setData(1,2,3);
   vijay.getData();
    
    return 0;
}