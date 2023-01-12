//  count the number of occurrence  of particular element in given vector
#include <iostream>
#include <vector>
using namespace std;
int countNuberOcc(vector<int> v, int k)
{
    int count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == k)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    vector<int> v(6);
    cout << " Fill the value in vector :" << endl;
    for (int i = 0; i < 6; i++)
    {
        cin >> v[i];
    }
    int x;
    cout << " Enter the value of x is :" << endl;
    cin >> x;
    int result = countNuberOcc(v, x);
    cout << " Total number of occurrence of " << x << " is " << result << endl;

    return 0;
}
//  we can find number of element strictly greater then x from this approach