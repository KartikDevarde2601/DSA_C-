#include <iostream>
#include <vector>

int main()
{
    std::vector<int> arr{10, 23, 34, 56};

    std::cout << arr.size() << std::endl;
    std::cout << arr.capacity() << std::endl;

    std::cout << sizeof(arr) / sizeof(int);

    arr.push_back(3);
    arr.push_back(4);

    for (int i = 0; i < arr.size(); i++)
    {
        arr.pop_back();
    }

    std::cout << std::endl;

    std::cout << arr.size() << std::endl;
    std::cout << arr.capacity() << std::endl;
    return 0;
}