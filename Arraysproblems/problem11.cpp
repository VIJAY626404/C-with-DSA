//  sort array in form of 0's and 1's
//1.  using two pointer approach
#include<iostream>
#include<vector>
using namespace std;
void sortedOneZeros(vector<int>&v){
    //  here we use referrence as address and store value
    int left = 0, right= v.size()-1;
    while(left<right){
        if(v[left]==1 && v[right]==0){
         v[left++]=0;
         v[right--]=1;
        }
        if(v[left]==0){
            left++;
        }
        if(v[right]==1){
            right--;
        }
        return ;
    }
}

int main(){
    int n; 
    cout<<"Enter the size of vector :"<<endl;
    cin>>n; 
    vector<int>v;
    for(int i =0; i<n; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    sortedOneZeros(v);
    for(int i =0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}
// ===============================
// //2. simple approach
// #include<iostream>
// #include<vector>
// using namespace std;
// void sortOnesZeros(vector<int>&ans){
//     int countZeros = 0;
    
//         for(int x:ans){
//             if(x==0){
//              countZeros++;
//         }
        
//     }
//         for(int i =0; i<ans.size(); i++){
//             if(i<countZeros){
//                 ans[i]=0;
//             }
//             else{
//                 ans[i]=1;
//             }
//         }
// }

// int main(){
//     vector<int>v;
//     int n;
// cout<<"Enter the size of vector :"<<endl;
// cin>>n;
// for(int i =0; i<n; i++){
//     int ele;
//     cin>>ele;
//     v.push_back(ele);
// }

//  sortOnesZeros(v);
//  for(int i=0; i<n; i++){
//     cout<<v[i]<<" ";
//  }
//  cout<<endl;

    
//     return 0;
// }
//  =====================================
// 3. direct approach
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main(){
//     vector<int>ans = { 1,0,1,1,0,0,1};
//     cout<<"Before sorting array is :"<<endl;
//      for(int i =0; i<ans.size(); i++){
//         cout<<ans[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"After sorting value of array is :"<<endl;
//     sort(ans.begin(), ans.end());
//     for(int i =0; i<ans.size(); i++){
//         cout<<ans[i]<<" ";
//     }
//     cout<<endl;
//     reverse(ans.begin(), ans.end());
//     cout<<"After reverse value of array is :"<<endl;
//      for(int i =0; i<ans.size(); i++){
//         cout<<ans[i]<<" ";
//     }

//     return 0;
// }