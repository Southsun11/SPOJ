#include <iostream>
#include <string>
int main()
{
    int tests;
    int number1, number2;
    std::string n1;
    std::string n2;
    std::cin >> tests;
    int modulo;
    for (int i = 0; i < tests; i++)
    {
        std::cin >> number1;
        number2 = number1;
        while (number1 != 0)
        {
            modulo = number1 % 16;
            switch(modulo)
            {
            case 15:
                n1 = 'F' + n1;
                break;
            case 14:
                n1 = 'E' + n1;
                break;
            case 13:
                n1 = 'D' + n1;
                break;
            case 12:
                n1 = 'C' + n1;
                break;
            case 11:
                n1 = 'B' + n1;
                break;
            case 10:
                n1 = 'A' + n1;
                break;
            default:
                n1 = std::to_string(modulo) + n1;
                break; 
            }
            number1 = (number1 - modulo) / 16;
        }

        while (number2 != 0)
        {
            modulo = number2 % 11;
            switch (modulo)
            {
            case 10:
                n2 = 'A' + n2;
                break;
            default:
                n2 = std::to_string(modulo) + n2;
                break;
            }

            number2 = (number2 - modulo) / 11;
        }
        std::cout << n1  << " " << n2 << std::endl;
        n2.clear();
        n1.clear();
    }
}
