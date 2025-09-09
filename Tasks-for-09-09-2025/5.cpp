/*
 Задача 5. Электронные часы
Электронные часы показывают время в формате h:mm:ss, где:

h — часы,
m — минуты (обязательно двузначные),
s — секунды (обязательно двузначные).
С начала суток прошло n секунд.
Выведите, что покажут часы.
*/
#include <iostream>
int main()
{
    int n;
    std::cout << "From seconds to time at the beginning of the day\n";
    std::cout << "Enter the seconds that have passed since the beginning of the day\n";
    std::cin>> n;
    if (n >= 86400)
    {
        std::cout << "The number of seconds went beyond the day. Restart the program\n";
        return 0;
    }
    else
    {
        int h = n/3600;
        int m = (n%3600)/ 60;
        int s = n%60;
        std::cout << h<<":";
        if (m<10) 
        { 
        std::cout <<"0";
        }
        std::cout <<m<<":";
        if (s<10) 
        { 
        std::cout <<"0";
        }
        std::cout <<s << " Time after the beginning of the day";
        return 0;
    }
}

