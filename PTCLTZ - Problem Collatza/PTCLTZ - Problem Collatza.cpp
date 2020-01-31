#include <iostream>

int main()
{
    int testy;
    int liczba;
    int n;
    std::cin >> testy;
    for (int i = 0; i < testy; i++)
    {
        n = 0;
        std::cin >> liczba;
        while (liczba != 1)
        {
            if (liczba % 2 == 0)
                liczba = liczba / 2;
            else
                liczba = liczba * 3 + 1;
            n++;
        }
        std::cout << n << std::endl;
    }
}

