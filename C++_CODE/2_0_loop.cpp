//****************************************************
// 1********For loop*********
// #include<iostream>
// using namespace std;
// int main(){
// int i=1;
// for(int i=1; i<=100; i++){
//     cout<<i<<endl;
// //     i++;

// // }
// // infinite for loop
// // for(int i=1; 34<=40; i++){
// //     cout<<i<<endl;
// // }


//     return 0;
// }
// ***************************************************
//2******While loop*********
// #include<iostream>
// using namespace std;
// int main(){
//     int i= 1;
//     while(i<=100){
//         cout<<i<<endl;
//         i++;
//     }
//     return 0;
// }
// **************************************************
// 3. *******do while loop*******
#include<iostream>
using namespace std;
int main(){
    int n;
    int i=1;
    int mul;
    cout<<"Enter the value of n is :"<<endl;
    cin>>n;
    do{
        mul= i*n;
       // cout<<"%d*%d=%d is :"<<mul<<endl;
        cout<<mul<<endl;
        i++;


    }while(i<=10);
    
    return 0;
}
//****************************************************