#include <iostream>
#include <cmath>
struct Point
{
    char m_name[10];
    int m_a;
    int m_b;
};

void sortuj(Point*,int n);
int main()
{
    int testy;
    std::cin >> testy;
    int punktow;
    for (int i = 0; i < testy; i++)
    {
        std::cin >> punktow;
        Point* p = new Point[punktow];
        for (int j = 0; j < punktow; j++)
        {
            std::cin >> p[j].m_name;
            std::cin >> p[j].m_a;
            std::cin >> p[j].m_b;
        }
        sortuj(p, punktow);
        for (int j = 0; j < punktow; j++)
            std::cout << p[j].m_name << " " << p[j].m_a << " " << p[j].m_b << std::endl;
        std::cout << std::endl;
        std::cin.get();
    }
}

void sortuj(Point* p,int n)
{
    for(int i = 0;i < n;i++)
        for (int j = 0; j < n - 1; j++)
        {
            if (sqrt(pow(p[j].m_a, 2) + pow(p[j].m_b, 2)) > sqrt(pow(p[j + 1].m_a, 2) + pow(p[j + 1].m_b, 2)))
            {
                Point temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
                
        }
}