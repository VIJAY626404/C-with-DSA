// opps - classes and objects
// C++ -----> initially called - c with classes by stroustroup
// class-----> extension of structure (in c)
// stracture had limitation
// . member are public
// . no method
// classes -----> stracture + more
// classes -----> can have method and properties
// classes -----> can make few member as private and public
// stracture in C++ typedefed
// you can declare the object along with the  class declaration like this:
/*class Employee{
    // defination 
} harry, rohan , lovish; */
// harry. salary = 8 make no sense if salary is private
// Nestiong of member function
#include<iostream>
#include<string>
using namespace std;
class binary{
   // private : 
    string s;
    
    public:
    void read(void);
    void check_bin(void);
    void ones_compliment(void);
    void display(void);
};
void binary :: read(void){
    cout<< "Enter the binary number is "  <<endl;
    cin>>s;
}
void binary :: check_bin(void){
    for(int i =0; i< s.length(); i++)
    {
        if( s.at(i)! = '0' &&  s.at(i)! = '1')
        {
            cout<<"Incorrect binary format"<< endl;
            exit(0);
        }
    }
}
void binary :: ones_compliment(void)
{
    check_bin();
    for(int i = 0; i<s.length(); i++)
    {
        if( s.at(i) == '0')
        {
            s.at(i) = '1' ;
        }
        else{
            s.at(i) = '0' ;
        }
    }
}
void binary:: display(void)
{
    cout<<"Display your binary number"<<endl;
    for(int i = 0; i<s.length(); i++)
    {
        cout<< s.at(i);
    }
    cout<< endl;
}

int main(){
    binary b; 
    b.read();
    //b.check_bin();
    b.display();
    b.ones_compliment();
    b.display();
    
    return 0;
}