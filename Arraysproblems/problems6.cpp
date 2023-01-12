//  count the number of triplets whose sum is equal to the given value x
#include <iostream>
#include <vector>
using namespace std;
int totalNumbersOfpairs(vector<int> v, int n)
{
    int totalNumbers = 0;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
        //  here two element will constant and we will check other elements
            for(int k =j+1; k<v.size(); k++){
            if (v[i] + v[j] + v[k]== n)
            {
                totalNumbers++;
            }
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

