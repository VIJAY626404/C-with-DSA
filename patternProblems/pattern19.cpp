// wap to print pattern
        //          *
        //       * *
        //    * * *
        // * * * *
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    while(i<=n){
        // int space= n-i;
        // while(space){
        //     cout<<" ";
        //     space= space-1;
        // }
        int space = 1; 
        while(space<=n-i){
            cout<<" ";
            space++;
        }
        int j=1;
        while(j<=i){
            cout<<" * ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
        
    return 0;
}