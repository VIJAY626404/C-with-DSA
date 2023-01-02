//  string implementation
#include<iostream>
using namespace std;

int main(){
    string s = "prabhat";
  cout<<s<<endl;
  cout<<s.size()<<endl;
  cout<<s.capacity()<<endl;
  s[4]= '\0';
  cout<<s<<endl;
  s.push_back('v');
  s.push_back('i');
  s.push_back('j');
  s.push_back('a');
  s.push_back('y');
  s.push_back('a');
  s.push_back('j');
  s.push_back('e');
  s.push_back('e');
  s.push_back('t');
  cout<<" new string is :"<<s<<endl;
  cout<<s.size()<<endl;
  cout<<s.capacity()<<endl;
  
    return 0;
}