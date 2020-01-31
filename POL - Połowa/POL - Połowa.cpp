#include <iostream>
#include <string>
int main()
{
    std::string str;
    int tests;
    std::cin >> tests;
    
    for (int i = 0; i < tests; i++)
    {
        std::cin >> str;
        //getline(std::cin, str);
        for (int j = 0; j < str.size() / 2; j++)
            std::cout << str[j];
        std::cout << std::endl;
    }
}
