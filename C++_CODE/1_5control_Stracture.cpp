// ******selection control stracture if---else if----else-----ladder*****
// #include<iostream>
// using namespace std;
// int main(){
// int age;

// cout<<"Enter your age"<<endl;
// cin>>age;
// if(age<18 & age>1){
//     cout<<"You are kid so you don't need to come in the party"<<endl;
// }
//     else if (age==18){
//         cout<<"You are just ready for boting"<<endl;
//     }
//     else if(age<1){
//         cout<<"You are not yet born"<<endl;
//     }
//     else{
//         cout<<"You can come this party" <<endl;
//     }

//     return 0;
// }

// @@@@@@Selection control stracture Switch cases statements
#include<iostream>
using namespace std;
int main(){
int age;
cout<<"Enter your age"<<endl;
cin>>age;
switch(age){
    case 18:
    cout<<"You are 18"<<endl;
    break;
    case 22:
    cout<<"You are 22"<<endl;
    break;
    case 2:
    cout<<"You are 2"<<endl;
    break;
    default:
    cout<<"No special case found"<<endl;
    break;
}

    return 0;
}