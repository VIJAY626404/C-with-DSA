//  write a program to print pattern
// 1 1 1 1 
//    2 2 2
//       3 3
//          4
#include<iostream>
using namespace std;

int main(){
    int n ;
    // cin>>n;
    // for(int i =1; i<=n; i++){
    //     for(int space =1; space<=i-1;space++){
    //         cout<<" "<<" ";
    //     }
    //     for(int j=1; j<=n-i+1; j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }
    cin>>n;
    int i= 1;
    while(i<=n){
        int space =1;
        while(space<=i-1){
            cout<<" "<<" ";
            space++;
        }
        int j = 1; 
        while(j<=n-i+1){
            cout<<i<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}