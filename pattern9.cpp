#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            std::cout << "*";
        }

        std::cout << std::endl;
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << "*";
    }

    std::cout << std::endl;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

/*
input = 5
output

*
**
***
****
*****
****
***
**
*


*/