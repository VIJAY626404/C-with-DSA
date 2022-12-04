// wap to print pattern
// 1 2 3 4 
//    2 3 4
//       3 4
//           4

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int i=1;
    cin>>n;
    while(i<=n){
        int space= 1;
        while(space<=i-1){
            cout<<" "<<" ";
        space= space+1;
        }
        int j=1; 
        while(j<=n-i+1){  
            
            cout<<i+j-1<<" ";
      
         j= j+1;
        }
        
        cout<<endl;
        i =i+1;
        
    
    }
    return 0;
}

//  2nd method
// #include<iostream>
// using namespace std;
// int main(){
//     int n; 
//     cin>>n;
//     int i =1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             if(i<=j){
//                 cout<<j<<" ";
//             }
//             else{
//                 cout<<" "<<" ";
//             }
//             j = j+1;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }

//  3rd method
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
   
//     for(int i =1; i<=n;i++){
//         for(int j=1; j<i; j++){
//             cout<<" "<<" ";
//         }
//         for(int k =1; k<=n-i+1;k++){
//             cout<<i+k-1<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
