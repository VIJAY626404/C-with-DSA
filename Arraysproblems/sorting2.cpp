//  write a program to implementation of bubble sorting
#include<iostream>
using namespace std;
void bubbleSorting(int arr[],int n){
    for(int i =0; i<n-1; i++){
        for(int j =0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[6] ={6,45,78,2,3,9};
    bubbleSorting(arr, 6);
    
    return 0;
}

// #include<iostream>
// using namespace std;

// int main(){
//     int n; 
//     cin>>n;
//     int arr[50];
//     for(int i =0; i<n; i++){
//         cin>>arr[i];
//     } 
//     for(int i =1; i<n; i++){
//         for(int j =0; j<n-i; j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j+1],arr[j]);
//             }
//         }
//     }
//     for(int i =0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }