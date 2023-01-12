//  you have given Q queris in , and we need to print yes or no if given number of queries present in array
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n; 
    cin>>n; 
    vector<int>v(n);
    for(int i =0; i<n; i++){
        cin>>v[i];
    }
    const int N = 1e5+10;
    vector<int>freq(N,0);
    for(int i =0; i<n; i++){
        freq[v[i]]++;

    }
    cout<<" Enter the query  ;"<<endl;
    int q;
    cin>>q;
    while(q--){
        int queryelement;
        cin>>queryelement;
        cout<<freq[queryelement]<<endl;
    }
    
    return 0;
}