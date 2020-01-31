#include <iostream>

int main()
{
    int  tests;
    int path;
    int directory;
    int steps;
    int NS;
    int WE;
    std::cin >> tests;
    for (int i = 0; i < tests; i++)
    {
        NS = 0;
        WE = 0;
        std::cin >> path;
        for (int j = 0; j < path; j++)
        {
            std::cin >> directory;
            std::cin >> steps;
            if (directory == 0)
                NS += steps;
            else if (directory == 1)
                NS -= steps;
            else if (directory == 2)
                WE += steps;
            else
                WE -= steps;
        }
        if (NS == 0 && WE == 0)
            std::cout << "studnia\n";
        else
        {
            if (NS > 0)
                std::cout << "0 " << NS << std::endl;
            if (NS < 0)
                std::cout << "1 " << -NS << std::endl;
            if (WE > 0)
                std::cout << "2 " << WE << std::endl;
            if (WE < 0)
                std::cout << "3 " << -WE << std::endl;
        }
    }
}
