//  write a program to count 1 bit in given integer
#include<iostream>
using namespace std;

int main(){
    int n;
    int count = 0;
    cin>>n;
    while(n!=0){
        if(n&1){
            count++;
            cout<<count;
        }
        n = n>>1;
    }
    return 0 ;
}


// #include<iostream>
// #include<math.h>
// using namespace std;

// int main(){
//     int n ;
//     cin>>n;
//     int ans =0;
//     int i =0;
//     while(n != 0){
//      int bit = n & 1;
//         ans = (bit * pow(10,i))+ans ;
//        n = n>>1;
//         i++;

//     }
//     cout<<" Answer is : "<< ans<<endl;
// }


    

