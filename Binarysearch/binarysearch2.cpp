// write a programe to print first and last occurrence index of element
#include<iostream>
using namespace std;
int firstOccurrence(int arr[], int n,int key){
    int start = 0;
    int end =n-1;
    int ans= -1;
    int mid = start+(end-start)/2;
    
        while(start<=end){
            if(arr[mid]==key){
                end = mid-1;
                ans=mid;
            }
            else if(arr[mid]<key){
                start = mid+1;
            }
            else if(arr[mid]>key){
                end = mid-1;
            }
            mid = start+ (end-start)/2;

        }
    return ans;
    
}

int lastOccurrence(int arr[], int n,int key){
    int start = 0;
    int end =n-1;
    int ans= -1;
    int mid = start+(end-start)/2;
    
        while(start<=end){
            if(arr[mid]==key){
                start = mid+1;
                ans=mid;
            }
           else if(arr[mid]<key){
                start = mid+1;
            }
            else if(arr[mid]>key) {
                end = mid-1;
            }
            mid = start+ (end-start)/2;

        }
    return ans;
    
}


int main(){
    int arr[12]= { 4,5,6,7,8,8,8,8,8,8,8,8};
    int left = firstOccurrence(arr,12,8);
    int right = lastOccurrence(arr,12,8);
    cout<< " first occerrence of  8 index is :"<<left<<endl;
    cout<< " last occerrence of  8 index is :"<<right<<endl;
    
    return 0;
}