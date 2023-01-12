//  write a program to print unique element in given array
#include<iostream>
using namespace std;
int uniqueElement(int arr[], int n){
    int unique = 0;
    //  for manuplating or remove same pairs
    for(int i=0; i<n; i++){
        for(int j =i+1; j<n; j++){
            if(arr[i]==arr[j]){
                arr[i]=arr[j]= -1;
            }
        }
    }
    for(int i =0; i<n; i++){
        if(arr[i]>0){
           unique= arr[i];

        }
    }
    return unique;
}

int main(){
    int arr[]= {2,3,1,3,2,4,1};
    int ans = uniqueElement(arr,7);
    cout<<" Unique element is :"<<ans<<endl;

    
    return 0;
}