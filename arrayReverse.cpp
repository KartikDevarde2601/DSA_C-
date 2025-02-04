#include <iostream>

int main()
{
    int num[5] = {1, 2, 3, 4, 5};
    int size = sizeof(num) / sizeof(num[0]);
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        std::swap(num[start], num[end]);

        start++;
        end--;
    }

    for (int i = 0; i < size; i++)
    {
        std::cout << num[i] << " ";
    }
}