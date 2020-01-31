#include <iostream>

int main()
{
    int sum, number1, number2;
    char operation;
    while (std::cin >> operation)
    {
        std::cin >> number1 >> number2;
        switch (operation)
        {
        case '+':
            std::cout << number1 + number2 << std::endl;
            break;
        case '-':
            std::cout << number1 - number2 << std::endl;
            break;
        case '*':
                std::cout << number1 * number2 << std::endl;
                break;
        case '/':
            std::cout << number1 / number2 << std::endl;
            break;
        case '%':
            std::cout << number1 % number2 << std::endl;
            break;
        }
    }
}
