// wap program to print pattern
// 1 1 1 1
//     2 2 2
//        3 3
//            4
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    while(i<=n){
        int space= i-1;
        while(space){
            cout<<" ";
            space= space-1;
        }
        
        
        int j=1;
        while(j<=n-i+1){
            int num=1;
            cout<<num+i-1;
            num=num+1;
            j=j+1;
        }
        
        cout<<endl;
        i=i+1;
    }
        
    return 0;
}