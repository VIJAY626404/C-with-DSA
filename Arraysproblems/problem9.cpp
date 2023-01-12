//  rotate the given array 'a' by k step where k is non- negative integer  and it can be k>n where n is size of array
//  arr[]= {1,2,3,4,5} for k= 1, rotatearray[ ]= { 5,1,2,3,4}
#include<iostream>
using namespace std;
int main(){
    int arr[]= {1,2,3,4,5};
    int k = 2;
    k = k%5;
    //  k can be greater than 5
    int ansArray[5];
     int j =0; 
    //   inserting last n-k element in given array
     for(int i =5-k; i<5; i++){
        ansArray[j++]= arr[i];
     }
    //   inserting first n-k element in given array
     for(int i =0; i<=k; i++){
        ansArray[j++]= arr[i];
     }
     for(int i=0; i<5; i++){
        cout<<ansArray[i]<<" ";
     }
     cout<<endl;
    
    return 0;
}

