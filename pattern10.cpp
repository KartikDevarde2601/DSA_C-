#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int previousValue = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (previousValue == 1)
            {
                std::cout << 0;
                previousValue = 0;
            }
            else
            {
                std::cout << 1;
                previousValue = 1;
            }
        }
        std::cout << std::endl;
    }
}

/*
input = 5
output
1
01
010
1010
10101
*/