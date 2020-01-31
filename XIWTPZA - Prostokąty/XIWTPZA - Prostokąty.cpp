#include <iostream>
#include <algorithm>
#include <cmath>
long double kwadratowa(long long int b, long long  int c, long long  int d);

int main()
{
    int tests, size1, size2, size3, size4;
     double wynik1;
    long double t;
    long double z;
    long double y;
    std::cin >> tests;
    for (int i = 0; i < tests; i++)
    {
        std::cin >> size1 >> size2 >> size3 >> size4;
        if (size1 < size2)
            std::swap(size1, size2);
        if(size3 < size4)
            std::swap(size3, size4);
        if (size1 > size3 && size2 > size4  )
        {
              std::cout << "TAK" << std::endl;
        }
        else if (size1 < size3 && size2 < size4)
            std::cout << "NIE" << std::endl;
        else
        {
            wynik1 = kwadratowa(size2, size3, size4);
            t = size2 - wynik1;
            y = sqrt(pow(size4, 2) - pow(wynik1, 2));
            z = sqrt(pow(size3, 2) - pow(t, 2));
            if (z + y < size1)
            {
               // std::cout << z + y << std::endl;
                std::cout << "TAK" << std::endl;
            }
                
            else
            {
                //std::cout << z + y << std::endl;
                std::cout << "NIE" << std::endl;
            }
               
        }

      //  std::cout << wynik1 << std::endl;
      //  std::cout << y  << std::endl;
       // std::cout  << z << std::endl;
       // std::cout << t << std::endl;
       // std::cout << y + z;
        //std::cout << wynik1 << std::endl;y
        
        //else if(size3 < pow(size2 - t,2) + pow(size1 - g,2))
        //else 
        //    std::cout << "NIE" << std::endl;
    }
}


long double kwadratowa(long long int b, long long  int c, long long int d)
{
    long long int temp_a = -(pow(d, 2) + pow(c, 2));
    long long int temp_b = pow(d, 2) * 2 * b;
    long long int temp_c = (-(pow(d, 2) * pow(b, 2))) + (pow(d, 2) * pow(c, 2));
    long long int delta = pow(temp_b, 2) - 4 * temp_a * temp_c;
    //std::cout << temp_a << std::endl;
   // std::cout << temp_b << std::endl;
    //std::cout << temp_c << std::endl;
    //std::cout << delta << std::endl;
    long double wynik1 = (-b + sqrt(delta)) / (2 * temp_a);
    long double wynik2 = (-b - sqrt(delta)) /( 2 * temp_a);
    //std::cout << wynik1 << std::endl;
    //std::cout << wynik2 << std::endl;
    if (wynik1 > 0 && wynik1 < b)
        return wynik1;
    else
        return wynik2;

}

