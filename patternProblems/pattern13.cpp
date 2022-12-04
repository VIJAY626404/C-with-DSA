//    wap to print pattern
// A  A  A 
// B  B  B 
// C  C  C 
    #include<iostream>
    using namespace std;
 
int main(){
    int n;
    cin>>n;
    int i=1;
    // while(i<=n){
    //     char ch= 'A'+i-1 ;
    //     int j=1;
    //     while(j<=n){
    //         cout<<ch<<" ";
    //         j= j+1;
    //     }
    //     cout<<endl;
    //     i= i+1;
    // }
    for(int i =1; i<=n; i++){
        for(int j =1; j<=n; j++){
    char ch = 'A'+i-1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
     return 0 ;
 }