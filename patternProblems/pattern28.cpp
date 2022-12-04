// write a programe to pring pattern
//                            1
//                     2     3
//             4      5     6
//     7      8      9     10
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
        int counter =1; 
    for(int i =1; i<=n; i++){
        for(int space =1; space<=n-i;space++){
            cout<<" "<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<counter<<" ";
            counter++;
        }
        cout<<endl;
    }
    return 0;
}