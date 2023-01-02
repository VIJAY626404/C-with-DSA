//  write a program to implementation of palindrom string
// #include<iostream>
// using namespace std;

// bool checkPalindrome(char name[], int n){
//     int s =0, e = n-1;
//     while(s<=e){
//         if(name[s]!=name[e]){
//             return 0;
//         }
//         else{
//            s++;
//            e--;
//         return 1;
//         }
//     }
// }
// int getLength(char name[]){
//         int count = 0;
//         for(int i =0; name[i]!='\0'; i++){
//             count++;

//         }
//         return count;
//     }

// int main(){
//     char name[20];
//     cout<<" Your name is :"<<" ";
//     cin>>name;
//     int len = getLength(name);
//     cout<<" length : "<<len<<endl;
//  cout<<" check palindrome or not "<<endl<<checkPalindrome(name, len)<<endl;
//  cout<<" charactor is :"<<toLowercase('v')<<endl;
//  cout<<" charactor is :"<<toLowercase('J')<<endl;

    
    
//     return 0;
// }

//  check given string is palindrome or not  it can incluede both upper case and lower should
#include<iostream>
using namespace std;
char toLowercase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp =  ch-'A'+'a';
        return temp;
    }
}
bool checkPalindrome(char name[], int n){
    int s =0, e = n-1;
    while(s<=e){
        if(toLowercase(name[s])!=toLowercase(name[e])){
            return false;
        }
        else{
           s++;
           e--;
        return true;
        }
    }
}
int getLength(char name[]){
        int count = 0;
        for(int i =0; name[i]!='\0'; i++){
            count++;

        }
        return count;
    }

int main(){
    char name[20];
    cout<<" Your name is :"<<" ";
    cin>>name;
    int len = getLength(name);
    cout<<" length : "<<len<<endl;
 cout<<" check palindrome or not "<<endl<<checkPalindrome(name, len)<<endl;
    return 0;
}