//  implementatin of STL algorithms in C++
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(9);
    v.push_back(16);
    cout << "Finding 10: " << binary_search(v.begin(), v.end(), 10)<< endl;
    //  basically upper and lower bound return itrator
    cout << "Lower bound 9 : " << lower_bound(v.begin(), v.end(), 9) - v.begin() << endl;
    cout << "Upper bound 9 : " << upper_bound(v.begin(), v.end(), 9) - v.begin() << endl;
    int a = 4, b = 5;
    cout << "max :" << max(a, b) << endl;
    cout << "min :" << min(a, b) << endl;
    swap(a, b);
    cout << a << " " << b << endl;
    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());
    cout << "String: " << abcd << endl;
    cout << " Before rotate :" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    rotate(v.begin(), v.begin() + 1, v.end());
    cout << " After rotate :" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}