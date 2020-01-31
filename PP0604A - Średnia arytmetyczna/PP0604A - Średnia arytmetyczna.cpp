#include <iostream>
#include <cmath>
int main()
{
    int tests;
    int numbers;
    int number;
    int closest;
    double average;
    std::cin >> tests;
    for (int i = 0; i < tests; i++)
    {
        int sum = 0;
        std::cin >> numbers;
        int* tab = new int[numbers];
        for (int j = 0; j < numbers; j++)
        {
            std::cin >> number;
            tab[j] = number;
            sum += number;
        }
        average = (double)sum / (double)numbers;
        closest = 0;
        for (int j = 1; j < numbers; j++)
        {
            if (fabs(average - tab[j]) < fabs(average - tab[closest]))
                closest = j;
        }
        std::cout << tab[closest] << std::endl;
        
    }
}
