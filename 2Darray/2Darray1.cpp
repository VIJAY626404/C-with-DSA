//  creation of 2D array
#include<iostream>
using namespace std;

int main(){
    int arr[3][4];
    int sum =0;
    //  here i for row and j for column here value will store as a row wise
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
            sum = sum+arr[i][j];
        }
    }
    cout<<" sum of value is :"<<sum<<endl;
    cout<<" Row wise implementation of  2D array :"<<endl;

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //  here i for column, j for row and value will be store as a column wise
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            cin>>arr[j][i];
           
        }
    }
   cout<<" Column wise implementation of 2D array :"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}