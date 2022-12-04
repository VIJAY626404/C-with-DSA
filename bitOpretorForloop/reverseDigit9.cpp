// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     int reverse=0;
//     cin>>n;
//     while(n>0){
//         int firstDigit = n%10;
//         reverse = reverse*10 + firstDigit;
//         n =n/10;

//     }
//     cout<<reverse<<endl;

//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	int ans =0;
	cin>>n;
	while(n>0){
	int digit = n%10;
	ans= ans*10+digit;
	n= n/10;
	
	}
	cout<<ans;
	return 0;
}
