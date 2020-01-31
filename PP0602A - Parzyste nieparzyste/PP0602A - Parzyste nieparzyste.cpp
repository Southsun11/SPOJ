#include <iostream>
#include <string>
int main()
{
    int tests;
    int number;
    int counter = 0;
    int numbers;
    std::cin >> tests;
    std::string odd, even;
    for (int i = 0; i < tests; i++)
    {
        std::cin >> numbers;
        std::cin >> number;
        odd += std::to_string(number);
        for (int j = 0; j < numbers-1;j++)
        {
            std::cin >> number;
            if (counter % 2 == 1) 
                    odd = odd + " " + std::to_string(number);
            else if (counter % 2 == 0)
                if(even.empty())
                    even += std::to_string(number);
                else
                    even = even + " " + std::to_string(number);   
            counter++;
        }
        std::cout << even << " " << odd << std::endl;
        even.clear();
        odd.clear();
        counter = 0;
    }
}
