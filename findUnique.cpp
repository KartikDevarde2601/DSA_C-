#include <iostream>
#include <vector>

int findUnique(std::vector<int> nums)
{
    int ans = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        ans = ans ^ nums[i];
    }

    return ans;
}

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> nums(n);

    for (int i = 0; i < nums.size(); i++)
    {
        std::cin >> nums[i];
    }

    int ans = findUnique(nums);

    std::cout << ans;
}