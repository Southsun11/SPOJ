#include <iostream>
const int DAY_IN_SECONDS  = 60*60*24;
int main()
{
    int testy;
    int liczba;
    int ciastek_w_pudelku;
    int suma_ciastek;
    int sekund_na_ciastko;
    std::cin >> testy;

    for (int i = 0; i < testy; i++)
    {
        std::cin >> liczba;
        std::cin >> ciastek_w_pudelku;
        suma_ciastek = 0;
        for (int j = 0; j < liczba; j++)
        {
            std::cin >> sekund_na_ciastko;         
            suma_ciastek += DAY_IN_SECONDS / sekund_na_ciastko;
        }
        suma_ciastek = ((suma_ciastek % ciastek_w_pudelku) == 0 ? suma_ciastek / ciastek_w_pudelku : (suma_ciastek / ciastek_w_pudelku) + 1);
        std::cout << suma_ciastek << std::endl;

    }

}
