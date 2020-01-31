#include <iostream>
#include <string>
int main()
{
	std::string str;
	int temp;
	std::cin >> temp;
	str = std::to_string(temp);
	while (std::cin >> temp)
	{
		str = std::to_string(temp) + " " + str;
	}
	std::cout << str;
}