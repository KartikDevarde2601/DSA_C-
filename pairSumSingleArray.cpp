#include <iostream>
#include <vector>

using namespace std;

vector<int> FindPairSum(vector<int> nums, int k)
{
    vector<int> ans;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == k)
            {
                ans.push_back(i);
                ans.push_back(j);
                break;
            }
        }
    }
    if (ans.empty())
    {
        ans.push_back(-1);
        ans.push_back(-1);
    }
    return ans;
}
int main()
{
    vector<int> nums{1, 2, 4, 64, 65, 75, 35, 24};
    int k = 28;

    vector<int> ans = FindPairSum(nums, k);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}