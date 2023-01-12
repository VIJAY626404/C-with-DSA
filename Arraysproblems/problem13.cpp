//  given an integer array sorted as non-decreasing order,return an array of a squares of each number sorted in non- decreasing order
//  in two pointer approach we traverse from two sides
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void squaresArray(vector<int>&v){
    vector<int>ans;
    int s=0, e = v.size()-1;
   while(s<=e){
    //  here we campare absolute value of element 
    if(abs(v[s])<abs(v[e])){
        ans.push_back(v[e]*v[e]);
        e--;
    }
    else{
        ans.push_back(v[s]*v[s]);
        s++;
    }

   }
//     for non- decreasing order
   reverse(ans.begin(), ans.end());
   for(int i=0; i<v.size(); i++){
    cout<<ans[i]<<" ";
   }
   cout<<endl;
}

int main(){
    vector<int>v;
    int n;
    cout<<"Enter the element in array :"<<endl;
     cin>>n;
     for(int i =0; i<n; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
     }
     squaresArray(v);
     

    return 0;
}