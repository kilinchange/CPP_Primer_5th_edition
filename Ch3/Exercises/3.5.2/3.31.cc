#include <iostream>
#include <cstddef>

int main()
{
    int ia[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (size_t idx = 0; idx < 10; idx++)
        std::cout << ia[idx] << std::endl;

    return 0;
}