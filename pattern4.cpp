#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            std::cout << i + 1;
        }
        std::cout << std::endl;
    }
    return 0;
}

/*
output

1
22
333
4444
55555
666666
7777777
88888888
999999999
10101010101010101010


*/