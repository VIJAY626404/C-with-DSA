//  find the difference between the sum of element at even index and  to the sum of odd index
#include<iostream>
using namespace std;
int differenceEvenOdd(int arr[],int n){
    int ansSum = 0;
    for(int i =0; i<n; i++){
        if(i%2==0){
            ansSum+= arr[i];
        }
        else{
            ansSum-= arr[i];
        }
    }
    return ansSum;
}

int main(){
    int arr[]= { 2,4,1,5,6,3};
    int result = differenceEvenOdd(arr, 6);
    cout<<" Difference is :"<<result<<endl;
    
    return 0;
}