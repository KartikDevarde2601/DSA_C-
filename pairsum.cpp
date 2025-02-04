#include <iostream>
#include <vector>

using namespace std;

vector<int> FindPairSum(vector<int> nums1, vector<int> nums2, int k)
{
    vector<int> ans;
    for (int i = 0; i < nums1.size(); i++)
    {
        for (int j = 0; j < nums2.size(); j++)
        {
            if (nums1[i] + nums2[j] == k)
            {
                ans.push_back(i);
                ans.push_back(j);
                break;
            }
        }
    };
    if (ans.empty())
    {
        ans.push_back(-1);
        ans.push_back(-1);
    }

    return ans;
}

int main()
{
    vector<int> nums1{1, 2, 3, 4, 55};
    vector<int> nums2{2, 56, 67, 2, 4};
    int sum = 7;

    vector<int> pair = FindPairSum(nums1, nums2, sum);
    for (int i = 0; i < pair.size(); i++)
    {
        cout << pair[i] << " ";
    }

    return 0;
}