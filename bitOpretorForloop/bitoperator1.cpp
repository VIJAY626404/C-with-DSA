// #include<iostream>
// using namespace std;

// int main(){
//     int a=4;
//     int b= 6;
//     cout<<" a&b "<<(a&b)  << endl;
//     cout<<" a|b "<<(a|b)  << endl;
//     cout<<" ~a "<<(~a)  << endl;
//     cout<<" a^b "<<(a^b)  <<endl;

//     cout<< (17<<1) <<endl;  // left shift 1 time
//     cout<< (17<<2) <<endl;
//     cout<< (17>>1) <<endl;
//     cout<< (17>>2) <<endl; // right shift 2 time
//     cout<<endl;

//     int i= 7;
//     cout<< ++i <<endl;

//     cout<<i++<<endl;
//     // 7, 8
//     // 9, 8
//     cout<< --i <<endl;

//     cout<< i-- << endl;
//     // 9, 8
//     // 8,9
//     return 0;
// }

// 1.
// #include<iostream>
// using namespace std;

// int main(){
//     int a=8, b=2;
//     if(++a){
//         cout<<b;
//     }
//         else{
//             cout<< ++b;
        
//     }
//     return 0;
// }
// ***********************

//  2.
// #include<iostream>
// using namespace std;

// int main(){
//     int a =1;
//     int b= 2;
//     if(a-- >0  && ++b>2){
//         cout<<" Stage1 - Inside If" ;
//     }
//     else{
//         cout<<"Stage2 -  Inside Else" ;
//     }
//     cout<<endl;
//     cout<< a <<" "<< b<< endl;
//     return 0;
// }

// 3.
// #include<iostream>
// using namespace std;

// int main(){
//     int a =1;
//     int b= 2;
//     if(a-- >0  || ++b>2){
//         cout<<" Stage1 - Inside If" ;
//     }
//     else{
//         cout<<"Stage2 -  Inside Else" ;
//     }
//     cout<<endl;
//     cout<< a <<" "<< b<< endl;
//     return 0;
// }  

//  4.
// #include<iostream>
// using namespace std;

// int main(){
//     int a=3;
//     cout<< 25* ((++a))  ;
//     return 0;
// }

//5
#include<iostream>
using namespace std;

int main(){
    int a=1 ;
int b= a++;
int c = ++a;
cout<< b<<endl;
cout<<c<<endl;
    return 0;
}