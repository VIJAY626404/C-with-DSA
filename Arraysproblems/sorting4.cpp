// implementation of Merge sorting in C++
#include<iostream>
using namespace std;
void merge(int arr1[],int m, int arr2[],int n, int arr3[]){
    int i =0, j =0;
    int k =0;
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            arr3[k++]= arr1[i++];
        }
        else{
            arr3[k++]= arr2[j++];
        }
        while(i<m){
            arr3[k++]= arr1[i++];
        }
        while(j<n){
            arr3[k++]= arr2[j++];
        }
    }
}
void print(int arr[], int n){
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr1[5]= {2,4,6,8,9};
    int arr2[4]= { 10, 13,16,18};
    int arr3[9]={0};
    merge(arr1,5, arr2,4,arr3);
    print(arr3,9);
    return 0;
}