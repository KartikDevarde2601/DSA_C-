#include <iostream>

int main()
{
    int num[5];
    int n = sizeof(num) / sizeof(num[0]);

    for (int i = 0; i < n; i++)
    {
        std::cin >> num[i];
    }

    for (int i = 0; i < n; i++)
    {
        num[i] = 1;
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << num[i] * 2 << " ";
    }
}