#include <iostream>

int main()
{
    int number;
    int counter = 0;
    bool previousnot42 = false;
    while (counter != 3)
    {
        std::cin >> number;
        if (number == 42 && previousnot42)
        {
            counter++;
            previousnot42 = false;
        }
        //else if ((number == 42 && !previousnot42) || (number != 42 && previousnot42))
        //    counter = 0;
        else if (number != 42 && !previousnot42)
        {
            previousnot42 = true;

        }

        std::cout << number << std::endl;
        if (counter == 3)
            break;
    }

}