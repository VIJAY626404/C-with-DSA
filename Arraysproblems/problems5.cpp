//  find the total numbers of pairs in the arrays whose sum is equal to the given value x
#include <iostream>
#include <vector>
using namespace std;
int totalNumbersOfpairs(vector<int> v, int k)
{
    int totalNumbers = 0;
    for (int i = 0; i < v.size(); i++)
    {
        //  here one element will constant and we will check other elements
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[i] + v[j] == k)
            {
                totalNumbers++;
            }
        }
    }
    return totalNumbers;
}

int main()
{
    vector<int> v = {2, 3, 4, 7, 1, 6, 5};
    int target = 7;
    int result = totalNumbersOfpairs(v, target);
    cout << " Total number of pairs is :" << result << endl;

    return 0;
}

