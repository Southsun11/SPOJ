#include <iostream>

int main()
{
    int tests;
    int n, x, y;
    std::cin >> tests;
    for (int i = 0; i < tests; i++)
    {
        std::cin >> n >> x >> y;
        for (int j = 1; j < n; j++)
        {
            if (j % x == 0 && j % y != 0)
                std::cout << j << " ";
        }
    }
}