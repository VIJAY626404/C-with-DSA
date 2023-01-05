//  write a program to print sum of row element in array
#include<iostream>
using namespace std;
void rowsWiseSum(int arr[][4], int row, int col){
    for(int row =0; row<3; row++){
        int sum =0;
        for(int col=0; col<4; col++){      
            sum+= arr[row][col];
        }
        cout<<sum<<" ";      
    }
}
int largestSumRow(int arr[][4], int row, int col){
int maxi= INT16_MIN;
int rowIndex =-1;
for(int row =0; row<3; row++){
        int sum =0;
        for(int col=0; col<4; col++){      
            sum+= arr[row][col];
        }
        if(maxi<sum){
            maxi= sum;
            rowIndex= row;
        }
         
    }
    cout<<"maximum sum is :"<<maxi<<endl;
    cout<<"laragest index of sum of row is :"<<" ";
    return rowIndex;
}

// void columnWiseSum(int arr[][4], int row, int col){
//     for(int col=0; col<4; col++){
//         int sum =0;
//         for(int row =0; row<3; row++){
           
//             sum+= arr[row][col];
        

//         }
//         cout<<sum<<" ";
       
//     }
// }

int main(){
    int arr[3][4]= { 11,15,56,22,5,6,7,8,9,10,11,12};
    for(int i=0; i<3; i++){
        for(int j= 0; j<4; j++){
            cout<<arr[i][j]<<" ";   
        }
        cout<<endl;
    }
cout<<"sum of row wise element in array is :"<<endl;
    rowsWiseSum(arr,3,4);
    cout<<endl;
// cout<<"sum of column wise element in array is :"<<endl;
//     columnWiseSum(arr,3,4);
int ans = largestSumRow(arr,3,4);
cout<<ans<<endl;
    return 0;
}