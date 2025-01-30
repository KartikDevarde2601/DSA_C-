#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            std::cout << n - j + 1;
        }
        std::cout << std::endl;
    }

    return 0;
}