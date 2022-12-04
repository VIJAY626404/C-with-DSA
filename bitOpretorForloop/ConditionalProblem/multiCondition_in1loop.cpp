// #include<iostream>
// using namespace std;

// int main(){
//     for(int i =5, j =8; i<=5 && j>=8 ; i++,j--){
//         cout<<i<<" "<<j<<endl;
//     }
    
//     return 0;
// }

//  2. 
// #include<iostream>
// using namespace std;

// int main(){
//     for(int i =0; i<=5; i++){
//         cout<<i<<" ";
//         i++;
//     }
//     return 0;
// }
//  3. 
// #include<iostream>
// using namespace std;

// int main(){
//     for(int i =0; i<=5; i--){
//         cout<<i<<" ";
//         i++;
//     }
//     return 0;
// }

//  4. 
// #include<iostream>
// using namespace std;

// int main(){
//     for(int i =0; i<=15; i+= 2){
//         cout<<i<<" ";
//         if(i&1){
//             continue;
//         }
//         i++;
   
//     }
//     return 0;
// }

// //  5. 
// #include<iostream>
// using namespace std;

// int main(){
//     for(int i =0; i<5; i++){
//         for(int j =0 ; j<=5; j++)
//         cout<<i<<" "<<j<<endl;
      
//     }
//     return 0;
// }
//  6. 
#include<iostream>
using namespace std;

int main(){
    for(int i =0; i<5; i++){
        for(int j =0 ; j<=5; j++){
        if(i+j == 10){
            break;
        }
        cout<<i<<" "<<j<<endl;
      
    }
    }
   
}
