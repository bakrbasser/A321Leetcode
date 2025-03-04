#include <bits\stdc++.h>
using namespace std;

class Solution
{
public:
        int missingNumber(vector<int> &nums)
        {
                double totalSum = nums.size() / 2.0 * (nums.size() + 1);
                for (int i = 0; i < nums.size(); i++)
                {
                        totalSum -= nums[i];
                }
                return totalSum;
        }
};

class person
{
        string _name;
        string _age;
        string _address;
};

int main()
{
        vector<int> arr = {3, 1, 0};
        Solution G;
        cout << G.missingNumber(arr);
}