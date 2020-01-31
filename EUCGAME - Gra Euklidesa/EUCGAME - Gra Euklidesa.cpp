#include <iostream>
int main()
{
    int tests;
    int player1;
    int player2;
    std::cin >> tests;
    while (tests > 0)
    {
        std::cin >> player1 >> player2;
        while (player1 != player2)
        {
            player1 > player2 ? player1 -= player2 : player2 -= player1;
        }
        tests--;
        std::cout << player1 + player2 << std::endl;
    }
}
