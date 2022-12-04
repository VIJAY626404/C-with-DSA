//  find the total number of most occurrence in given array
#include<iostream>
using namespace std;
int firstOccurrence(int arr[],int n, int key){
    int s = 0; 
    int e= n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            e = mid-1;
        }
       else if(arr[mid]<key){
            s = mid+1;
        }
        else if(arr[mid]>key){
            e = mid-1;
        }
        mid = s+ (e-s)/2;
        
    }
    return ans;
}
int lastOccurrence(int arr[],int n, int key){
    int s = 0; 
    int e= n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            s = mid+1;
        }
       else if(arr[mid]<key){
            s = mid+1;
        }
        else if(arr[mid]>key){
            e = mid-1;
        }
        mid = s+ (e-s)/2;
        
    }
    return ans;
}

int main(){
    int arr[7]= {1,2,3,3,3,3,5};
    int first= firstOccurrence(arr, 7, 3);
    int last = lastOccurrence(arr,7,3);
    cout<<" First occurrence of 3 is: "<<first<<endl;
    cout<<" Last occurrence of 3 is: "<<last<<endl;
    int total = last- first+1;
    cout<<"Total number of  most occurrence is: "<<total;
    
    return 0;
}