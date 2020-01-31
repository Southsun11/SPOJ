#include <iostream>

int main()
{
    int size;
    int diff;
    int tempsize;
    std::cin >> size;
    ;
    while (size != 0)
    {
        size > 0 ? tempsize = size : tempsize = -size;
        diff = 1;
        int level = 0;
        int level2; ;
        char** tab = new char*[2 * tempsize];
        for (int i = 0; i < 2 * tempsize; i++)
        {
            tab[i] = new char[2 *tempsize];
        }
        for (int i = 0; i < 2 * tempsize; i++)
        {
            for (int j = 0; j < tempsize * 2; j++)
                tab[i][j] = '*';
        }
        if (size > 0)
        {
            for (int i = 0; i < tempsize; i++)
                for (int j = i + 1 ; j < tempsize ; j++)
                    tab[i][j] = '.';
 
            for (int i = 0; i <  tempsize; i++)
                for (int j = 2 * tempsize - i; j < 2 * tempsize; j++)
                    tab[i][j] = '.';

            for (int i = tempsize; i < 2 * tempsize; i++)
                for (int j = 0; j < 2 * tempsize - i - 1; j++)
                    tab[i][j] = '.';

            for (int i = 2 * tempsize - 1; i >  tempsize - 1; i--)
                for (int j = i - 1; j  > tempsize - 1; j--)
                    tab[i][j] = '.';

        }
        else
        {
            
            for (int i = tempsize - 1; i > -1; i--)
                for (int j = i - 1; j > -1 ; j--)
                    tab[i][j] = '.';
            for (int i = tempsize; i <  2 * tempsize; i++)
                for (int j = 2 * tempsize - i; j < tempsize; j++)
                    tab[i][j] = '.';

            for (int i = 0; i <  tempsize; i++)
                for (int j = tempsize; j < 2 * tempsize - i - 1; j++)
                    tab[i][j] = '.';


            for (int i = tempsize; i < 2 * tempsize; i++)
                for (int j = i + 1; j < 2 * tempsize; j++)
                    tab[i][j] = '.';
        }
        for (int i = 0; i < 2 * tempsize; i++)
        {
            for (int j = 0; j < tempsize * 2; j++)
               std::cout <<  tab[i][j] ;
            std::cout << std::endl;
        }
                
        std::cin >> size;
    }
}
