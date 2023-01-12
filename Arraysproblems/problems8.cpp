//  write a program to find second largest element in given array
#include<iostream>
using namespace std;
int secondLargest(int arr[], int n, int k){
    int maxi1= INT16_MIN;
    int maxi2 = INT16_MIN;
    
    for(int i = 0; i<n; i++){
        if(arr[i]>maxi1){
            maxi1= arr[i];
        //    maxi2= arr[i-k];
        }
    }
    // return maxi2;
    for(int i=0; i<n; i++){
        if(arr[i]>maxi2 && arr[i]!= maxi1){
            maxi2= arr[i];
        }
    }
    return maxi2;
}

int main(){
    int arr[]= {3,4,6,8,1};
    int k;
    cout<<" Enter the value of k :"<<endl;
    cin>>k;
    int result = secondLargest(arr, 5,k);
    cout<<" largest element is :"<<result<<endl;
    
    return 0;
}
//  their have multiple approach to solve this problems