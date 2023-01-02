//  write a programe check valid palindrome (leetcode 124)
// remove extra character, all should be lower case ,palindrome check
// #include<iostream>
// using namespace std;

// int main(){
//     // valid character a-z, A-Z, or 0-9
//     return 0;
// }
class solution{
    private:
    //  check valid or not
    bool valid(char ch){
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
            return 1;
        }
    }
// it for lower case 
        char toLowercase(char ch){
    if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
        return ch;
    }
    else{
        char temp= ch-'A'+a ;
        return temp;
    }
        }
        //    its for palindrome 
        bool checkPalindrome(string a){
    int s =0; 
    int e = a.length()-1;
    while(s<=e){
        if(a[s]!= a[e]){
            return 0;
        }
        else{
           s++;
           e--;
        return 1;
        }
    }
}
        public:
        //  remove extra character
        bool ispalindrome(string s){
            // int i =0; 
            char temp = "";
            for(int j =0; j<s.length(); j++){
                if(valid(s[j])){
                    temp.push_back(s[j]);
                }
            }
            //  all convert into lowercase
         for(int j =0; j<temp.length(); j++){
            temp[j]= toLowercase(temp[j]);

         }
        //  check palindrome 
        return ispalindrome(temp);
    }
};