#include <iostream>

int main()
{
    int testy;
    int liczb;
    std::cin >> testy;
    for (int i = 0; i < testy; i++)
    {
        int temp;
        std::cin >> liczb;
        int* tab = new int[liczb];
        std::cin >> temp;
        for (int j = 0; j < liczb - 1; j++)
        {
            std::cin >> tab[j];
        }
        tab[liczb - 1] = temp;
        for (int j = 0; j < liczb; j++)
            std::cout << tab[j] << " ";
    }
}

