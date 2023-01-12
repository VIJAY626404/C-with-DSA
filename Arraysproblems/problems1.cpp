//  remove duplicate element in given array 
#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    if (nums.size() == 0)
    {
        return 0;
    }
    else
    {
        int c = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[c] != nums[i])
            {
                nums[++c] = nums[i];
            }
        }
        return c + 1;
    }
}
void Print(vector<int>&nums){
    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
}

    int main()
    {
        vector<int>v= {1,2,2,4,4,1};
        int ans = removeDuplicates(v);
        cout<<ans<<" ";
    

        return 0;
    }

