#include <iostream>

int main()
{
    int sum, number1, number2;
    char operation;
    int * registerr = new int[10];
    for (int i = 0; i < 10; i++)
        registerr[i] = 0;

    while (std::cin >> operation)
    {
        std::cin >> number1 >> number2;
        switch (operation)
        {
        case'z':
            registerr[number1] = number2;
            break;
        case '+':
            std::cout << registerr[number1] + registerr[number2] << std::endl;
            break;
        case '-':
            std::cout << registerr[number1] - registerr[number2] << std::endl;
            break;
        case '*':
            std::cout << registerr[number1] * registerr[number2] << std::endl;
            break;
        case '/':
            std::cout << registerr[number1] / registerr[number2] << std::endl;
            break;
        case '%':
            std::cout << registerr[number1] % registerr[number2] << std::endl;
            break;
        }
    }
}
