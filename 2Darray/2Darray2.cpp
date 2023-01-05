//  put random row and colums wise value and search target value in 2D array
#include<iostream>
using namespace std;
bool isValue(int arr[][4], int row,int col,int k){
    //  When passing a two-dimensional array to a function, you must specify the number of columns as a constant when you write the parameter type, so the compiler can pre-calculate the memory addresses of individual elements. This function computes the total of a given row.
    for(int i =0; i<row; i++){
        for(int j =0; j<col; j++){
            if(arr[i][j]==k){
                return 1;
            }
            // else{
            //     return 0;
            // }
        }
    }

return 0;
}

int main(){
    // int arr[3][4]= { 1,2,3,4,5,6,7,8,9,10,11,12};
    //  its for row wise storing value 
    int arr[3][4]= { {2,4,6,8},{1,3,5,7},{3,7,11,15}};
    for(int i =0; i<3; i++){
        for(int j =0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int target ;
    cout<<"Enter your target value :";
    cin>>target;
   
    if(isValue(arr,3,4, target)){
        cout<<target<<" is found"<<endl;
    }
    else{
        cout<<target<<"  is not found"<<endl;
    }
    return 0;
}