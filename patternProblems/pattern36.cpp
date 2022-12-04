//  write  a program to print pattern
// E
// E D 
// E D C 
// E D C B  
// E D C B A 
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i =1; i<=n; i++){
        for(int j= 1; j<=i; j++){
        // int ch  = 'E'-j+1;
        int ch ='A'+n-j;
            cout<<(char)(ch)<<" ";
        }
        cout<<endl;
    }
    return 0;
}