#include <iostream>
#include <iomanip>
long long  pascal(long long n, long long k);
int main()
{
    int testy;
    long long k, n;
    std::cin >> testy;
    for (int i = 0; i < testy; i++)
    {
        std::cin >> n >> k;
        std::cout  <<  pascal(n, k) << std::endl;
    }
}

long long pascal(long long  n, long long k)
{
    long long wynik = 1;
    if (k > n / 2)
        k = n - k;
    for (int i = 1; i <= k; i++)
    {
        wynik = wynik * (n - i + 1)/ i;
        
    }
        
    return wynik;
}
