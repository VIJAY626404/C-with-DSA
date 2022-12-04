// #include<iostream>
// using namespace std;
// bool evenOdd(int a){
   
//     if(a&1){
//         // cout<<num1<<" is even number "<<endl;
//         return 0;
//     }
//     else{
//         // cout<<num1<<" is odd number "<<endl;
//     return 1;
//     }
// }

// int main(){
//     int x;
//     cin>>x;
//    if(evenOdd(x)){
//     cout<< " num1 is even"<<endl;
//    }
//    else{
//     cout<<" num1 is not even "<<endl;
//    }

//     return 0;
// }
// 

#include<iostream>
using namespace std;
int evenOdd(int a){
   
    if(a%2==0){
        
        return 1;
    }
    else{ 
    return 0;
    }
}

int main(){
    int x;
    cin>>x;
   if(evenOdd(x)){
    cout<<x<< " is even"<<endl;
   }
   else{
    cout<< x<<" is odd "<<endl;
   }

    return 0;
}


