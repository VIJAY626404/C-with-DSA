//  move zero  implementation input is { 0,1,4,0,3,0,5,0,0} then output should be { 1,4,3,5,0,0,0,0,0}
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v= {0,1,4,0,3,0,5,0,0};
    
 int i=0; 
 for(int j =0; j<v.size();j++){
    if(v[j]!=0){
        swap(v[j],v[i]);
        i++;
    }
 }
 for(int i =0; i<v.size();i++){
    cout<<v[i]<<" ";
 }
  
    return 0;
}