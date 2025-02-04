#include <iostream>
#include <vector>
using namespace std;

void SortzeroAndone(vector<int> &nums)
{
    int i = 0, j = nums.size() - 1;
    while (i < j)
    {
        if (nums[i] == 1)
        {
            swap(nums[i], nums[j]);
            j--;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    vector<int> nums{1, 1, 0, 1, 0};

    SortzeroAndone(nums);

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}