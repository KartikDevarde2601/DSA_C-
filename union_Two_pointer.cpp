#include <bits/stdc++.h>

std::vector<int> FindUnion(std::vector<int> nums1, std::vector<int> nums2)
{
    int i = 0;
    int j = 0;
    std::vector<int> ans;
    while (i < nums1.size() && j < nums2.size())
    {
        if (nums1[i] <= nums2[j])
        {
            if (ans.size() == 0 || nums1[i] != ans.back())
            {
                ans.push_back(nums1[i]);
            }
            i++;
        }
        else
        {
            if (ans.size() == 0 || nums2[j] != ans.back())
            {
                ans.push_back(nums2[j]);
            }
            j++;
        }
    }

    while (i < nums1.size()) // IF any element left in arr1
    {
        if (ans.back() != nums1[i])
            ans.push_back(nums1[i]);
        i++;
    }
    while (j < nums2.size()) // If any elements left in arr2
    {
        if (ans.back() != nums2[j])
            ans.push_back(nums2[j]);
        j++;
    }
    return ans;
}

int main()
{
    std::vector<int> nums1{1, 2, 3, 3, 4, 6};
    std::vector<int> nums2{1, 3, 6, 8, 9};

    std::vector<int> ans = FindUnion(nums1, nums2);

    for (int i = 0; i < ans.size(); i++)
    {
        std::cout << ans[i] << " ";
    }

    return 0;
}
