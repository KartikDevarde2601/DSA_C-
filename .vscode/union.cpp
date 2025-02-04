#include <bits/stdc++.h>

using namespace std;

// union using Map
vector<int> FindUnion(int arr1[], int arr2[], int n, int m)
{
    vector<int> ans;
    map<int, int> freq;

    for (int i = 0; i < n; i++)
    {
        freq[arr1[i]]++;
    }

    for (int j = 0; j < m; j++)
    {
        freq[arr2[j]]++;
    }

    for (auto &it : freq)
    {
        ans.push_back(it.first);
    }

    return ans;
}

int main()
{
    int n = 15, m = 7;
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 4, 4, 4, 4, 188};
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};
    vector<int> Union = FindUnion(arr1, arr2, n, m);
    cout << "Union of arr1 and arr2 is " << endl;
    for (auto &val : Union)
        cout << val << " ";
    return 0;
}
