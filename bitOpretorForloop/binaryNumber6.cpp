 
 #include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n; 
    cin>>n;
int i =0;
    int ans=0;
    while(n !=0){
        int bit = n&2;
        ans= (bit *  pow(10,i) )+ans ;
        i++;
        n= n>>1;

    }
    cout<<"Answer is "<<ans<<endl;
    
}


//   write a program to print sum of digit and product 
// class binaryNumber6{
//     public:
//         int n; 
     
//     int subtractProductSum(int n){
//         int prod = 1; 
//         int sum =0;
//         while( n!=0){
//             int digit = n%10;
//             prod = prod*digit;
//             sum = sum + digit;
//             n = n/10;
//         }
//         int answer = prod - sum ;
//         return answer ;

//     }
// };