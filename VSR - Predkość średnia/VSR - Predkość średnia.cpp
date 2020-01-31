#include <iostream>

int main()
{
    int tests;
    int v1, v2;
    std::cin >> tests;
    for (int i = 0; i < tests; i++)
    {
        std::cin >> v1 >> v2;
        std::cout << (2 * v1 * v2) / (v1 + v2);
    }
}