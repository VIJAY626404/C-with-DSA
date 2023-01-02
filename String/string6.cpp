//  Return maximum occurring element in given string
#include <iostream>
using namespace std;

//  create an array of count of character
char mostOccCharacter(string s)
{
    int arr[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = 0;
        //  for lowercases
        if (ch >= 'a' && ch <= 'z')
        {
            number = ch - 'a';
        }
        //  for uppercases
        // else{
        //     number = ch- 'A';
        // }
        arr[number]++;
    }
    int maxi = -1, ans = 0;
    //  find maximum occ character
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    char finalAns = 'a' + ans;
    return finalAns;
}
int main()
{

    
    string s;
    cout << " Enter your value:" << endl;
    cin >> s;
    cout << " Maximum occurring character is :" << mostOccCharacter(s) << endl;

    return 0;
}