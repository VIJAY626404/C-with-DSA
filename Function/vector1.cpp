#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> ans;
    ans.push_back(5);
    cout<<ans.size()<<endl;
    cout<<ans.capacity()<<endl;
    ans.push_back(6);
    cout<<ans.size()<<endl;
    cout<<ans.capacity()<<endl;
    ans.push_back(7);
    cout<<ans.size()<<endl;
    cout<<ans.capacity()<<endl;
    ans.push_back(8);
    cout<<ans.size()<<endl;
    cout<<ans.capacity()<<endl;
    ans.push_back(3);
    cout<<ans.size()<<endl;
    cout<<ans.capacity()<<endl;
    ans.push_back(1);
    cout<<ans.size()<<endl;
    cout<<ans.capacity()<<endl;
    cout<<endl;
    ans.resize(9);
    cout<<ans.size()<<endl;
    cout<<ans.capacity()<<endl;
    
    return 0;
}