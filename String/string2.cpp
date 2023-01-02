//  write a program to print Reverse vowels of string
#include<iostream>
using namespace std;
void reverseVowel(char name[],int n){
    int s =0; 
    int e = n-1;
    char vow[256]={0};
        vow['a']=1,vow['A']=1,vow['e']=1,vow['E']=1,vow['i']=1,vow['I']=1,vow['o']=1,vow['O']=1,vow['u']=1,vow['U']=1 ;
        while(s<e){
            // while(s<e && vow[name[s]]==0)
            // s++;
            // while(s<e && vow[name[e]]==0)
            // e--;
            // swap(name[s++],name[e--]);
            if(s<e && vow[name[s]]==0 && vow[name[e]]==0){
                s++;
                e--;
            }
            else{
                 swap(name[s++],name[e--]);

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
    cout<<" Your name is :"<<endl;
    cin>>name;
    int len = getLength(name);
    cout<<" size of your string is :"<<len<<endl;
    reverseVowel(name,len);
    cout<<" After reverse vowel string is :"<<name<<endl;
    
    return 0;
}