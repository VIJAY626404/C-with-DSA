#include<iostream>
using namespace std;

int main(){
    // Array example
    int marks[ ] = {23,45,56,66};
    int mathMarks[4];
    mathMarks[0]= 4456;
    mathMarks[1]= 445;
    mathMarks[2]= 232;
    mathMarks[3]= 478;

    cout<<"These are math marks"<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;
    
    // You can change the value of Array
    marks[2]=666;
    cout<<"These are marks "<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    //************************************
    // for(int i=0; i<4; i++){
    //     cout<<"The value of marks is: "<<i<<" is"<<marks[i]<<endl;
    // }
    //************************************
    //Pointer and arrays
    int*p= marks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    // cout<<"The value of *p is "<<*p<<endl;
    // cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    // cout<<"The value of *(p+2)is "<<*(p+2)<<endl;
    // cout<<"The value of *(p+3) is "<<*(p+3)<<endl;

     return 0;
}