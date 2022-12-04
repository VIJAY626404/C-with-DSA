//  1.
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<=n; i++){
//         cout<<i<<" ";
//         i++ ;
//     }
    
//     return 0;
// }

//  2.
// #include<iostream>
// using namespace std;

// int main(){
//     for(int i=0; i<=5; i--){
//         cout<< i<<" "
//         i++;
//     }
//     return 0;
// }

// 3.
// #include<iostream>
// using namespace std;

// int main(){
//     for(int i=0; i<=15; i++){
//         cout<< i<< " " ;
//         if(1&i){
//             continue;
//         }
//         i++;
//     }
//     return 0;
// }

//  4.
// #include<iostream>
// using namespace std;

// int main(){
//     for(int i=0; i<5; i++){
//         for(int j=0; j<=5; j++){
//             cout<< i<< " " <<j<<endl;
//         }
        
//     }
//     return 0;
// }

// 5.
#include<iostream>
using namespace std;

int main(){
    for(int i=0; i<5; i++){
        for(int j=0; j<=5; j++){
            if(i+j==10){
                break;

            }
            cout<<i<<" "<<j<<endl;
          
        }
        
    }
    return 0;
}