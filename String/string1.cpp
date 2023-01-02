#include <iostream>
using namespace std;
void reverseString(char name[], int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}

int getlength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cout << " Enter you name :" << endl;
    cin >> name;
    // name[3]= '\0';
    //  this called null charater who are basically terminate the value of char array
    //  our programe will be stop excuting when found space, tab, newline
    cout << " Your name is : " << name << endl;
    int len = getlength(name);
    cout << " Length of string is :"<< len<<endl;
    reverseString(name,len);
    cout << " Reverse string is :" << name << endl;
    

    return 0;
}