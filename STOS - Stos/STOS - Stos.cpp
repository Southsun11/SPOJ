#include <iostream>

int main()
{
    int* stack = new int[10];
    int top = 0;
    char operation;
    while (std::cin >> operation)
    {
        
        if (operation == '+')
        {
            if (top < 10)
            {
                std::cin >> stack[top++];
                std::cout << ":)" << std::endl;
                
            }
            else
                std::cout << ":(" << std::endl;      
        }
        else if (operation == '-')
        {
            if (top == 0)
            {
                std::cout << ":(" << std::endl; 
            }
            else    
                std::cout << stack[--top] << std::endl;
        }
    }
    delete[] stack; 
}

