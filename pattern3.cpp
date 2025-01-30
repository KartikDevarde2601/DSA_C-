#include <iostream>

int main()
{

    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            std::cout << j + 1;
        }
        std::cout << std::endl;
    }

    return 0;
}

/*
output

1
12
123
1234
12345
123456
1234567
12345678
123456789
12345678910


*/