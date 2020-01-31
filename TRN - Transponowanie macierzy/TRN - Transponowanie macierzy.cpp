#include <iostream>

int main()
{
    int size1, size2;
    std::cin >> size1 >> size2;
    int** tab = new int*[size1];

    for (int i = 0; i < size1; i++)
        tab[i] = new int[size2];

    int** tab2 = new int* [size2];
    for (int i = 0; i < size2; i++)
        tab2[i] = new int[size1];

    for (int i = 0; i < size1; i++)
        for (int j = 0; j < size2; j++)
            std::cin >> tab[i][j];

    for (int i = 0; i < size1; i++)
        for (int j = 0; j < size2; j++)
            tab2[j][i] = tab[i][j];

    for (int i = 0; i < size2; i++)
    {
        for (int j = 0; j < size1; j++)
            std::cout << tab2[i][j] << " ";
        std::cout << std::endl;
    }
    for (int i = 0; i < size1; i++)
        delete[] tab[i];
    for (int i = 0; i < size2; i++)
        delete[] tab2[i];
    delete [] tab;
    delete[] tab2;
        
}
