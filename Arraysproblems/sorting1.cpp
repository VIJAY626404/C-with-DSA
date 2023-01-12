//  write a programe to implementation of selection sorting by function
#include <iostream>
using namespace std;
void selectionSorting(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[6] = {1, 5, 6, 0, 1, 5};
    selectionSorting(arr, 6);

    return 0;
}

// -----------without using function
// #include<iostream>
// using namespace std;

// int main(){
// int n;
// cout<<"Enter the number of element in array"<<endl;
// cin>>n;    
// int arr[50];
// for(int i =0 ; i<n; i++){
//     cin>>arr[i]; 
// }

// for(int i =0; i<n-1; i++){
//     for(int j=i+1; j<n; j++){
//         if(arr[j]>arr[i]){
//             // int temp = arr[j];
//             // arr[j] = arr[i];
//             // arr[i]= temp;
//             swap(arr[j],arr[i]);
//         }
        
//     }
// }
//    for(int i =0; i<n; i++){
//     cout<<arr[i]<<" ";
//    }
//     return 0;
// }


