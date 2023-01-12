//  write a program to find last occurrence in given array{1,3,5,1,7,1}where ans is 5
#include <iostream>
#include <vector>
using namespace std;
int lastOccurrence(vector<int> v, int k)
{
    int occurrence = -1;
//     for (int i = 0; i < v.size(); i++)
//     {
//         if (v[i] == k)
//         {
//             occurrence = i;
//         }
//     }
//     return occurrence;
for(int i = v.size()-1; i>=0; i--){
    if(v[i]==k){
        occurrence= i;
        break;
    }
}
return occurrence;
}

int main()
{
    vector<int> v(6);
    cout << " Fill the element in vector :" << endl;
    for (int i = 0; i < 6; i++)
    {
        cin >> v[i];
    }
    int x;
    cout << " Enter the value of x :" << endl;
    cin >> x;
    int result = lastOccurrence(v, x);
    cout << " Last occurrence is :" << result << endl;

    return 0;
}