// *************Stracture*************
// #include<iostream>
// using namespace std;
// typedef struct employee{
//     int eId; //4
//     char favChar; //1
//     float salary;  //4
// } ep;
// int main(){
//     ep hurry;
//     struct employee shubham;
//     struct employee rohan;
//     hurry.eId = 1;
//     hurry.favChar= 'c';
//     hurry.salary = 120000;
//     cout<<"The value is "<<hurry.eId<<endl;
//     cout<<"The value is "<<hurry.favChar<<endl;
//     cout<<"The value is "<<hurry.salary<<endl;
    
//      return 0;
// }

//**********Union***********
// #include<iostream>
// using namespace std;
// union money
// {
//     int rice; //4
//     char car; // 1
//     float pounds; //4
// } ;

// int main(){

//     union money m1;
//     m1.rice= 34;
//     m1.car= 'c';
//     cout<<m1.car;
    
//      return 0;
// }
//***********Enum*****************
#include<iostream>
using namespace std;

int main(){
    enum Meal{breakfast, lunch, dinner};
    Meal m1 = lunch;
    //cout<<m1;
    cout<<(m1==2);
    
     return 0;
}
