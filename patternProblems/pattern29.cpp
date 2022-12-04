#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    for(int i=1; i<=n;i++){
        for(int j =1; j<=n-i+1; j++){
       cout<<j<<" ";
        }

        for(int second =1; second<=i-1; second++){
            cout<<'*'<<" ";
        }
        for(int third =1; third<=i-1; third++){
            cout<<'*'<<" ";
        }
        // for(int fourth =1; fourth<=n-i+1; fourth++){
        //     cout<<n-fourth-i+2<<" ";
        // }
        for(int fourth = n-i+1; fourth; fourth--){
            cout<<fourth<<" ";
        }
        
           
           
        
        cout<<endl;
    
    }
    return 0;
}