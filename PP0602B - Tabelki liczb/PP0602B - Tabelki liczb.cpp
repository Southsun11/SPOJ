#include <iostream>

int main()
{
    int tests;
    int size1, size2;
    int temp,temp2;
    
    std::cin >> tests;
    for (int i = 0; i < tests; i++)
    {
        std::cin >> size1 >> size2;
        int** tab = new int* [size1];
        for (int j = 0; j < size1; j++)
            tab[j] = new int[size2];
        for (int j = 0; j < size1; j++)
            for (int n = 0; n < size2; n++)
                std::cin >> tab[j][n];
        int* temptab = new int[2 * (size1 + size2) - 4];
        
        {
            int j = 0;
            for (int n = 0; n < size1; n++)
            {
                temptab[j] = tab[n][0];
                j++;
            }

            for (int n = 1; n < size2; n++)
            {
                temptab[j] = tab[size1 - 1][n];
                j++;
            }

            for (int n = size1 - 2; n >= 0; n--)
            {
                temptab[j] = tab[n][size2 - 1];
                j++;
            }
            for (int n = size2 - 2; n > 0; n--)
            {
                temptab[j] = tab[0][n];
                j++;
            }
        }
        {
            int j = 0;
            for (int n = 1; n < size1; n++)
            {
                tab[n][0] = temptab[j];
                j++;
            }

            for (int n = 1; n < size2; n++)
            {
                tab[size1 - 1][n]  = temptab[j];
                j++;
            }

            for (int n = size1 - 2; n >= 0; n--)
            {
                tab[n][size2 - 1] = temptab[j];
                j++;
            }
            for (int n = size2 - 2; n >= 0; n--)
            {
                tab[0][n] = temptab[j] ;
                j++;
            }
        }


        for (int j = 0; j < size1; j++) 
        {
            for (int n = 0; n < size2; n++)
                std::cout << tab[j][n] << " ";
            std::cout << std::endl;
        }
           
       
        

    }
}
