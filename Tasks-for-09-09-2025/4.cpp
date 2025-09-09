/*
Задача 4. МКАД
Длина Московской кольцевой автомобильной дороги (МКАД) — 109 километров.
Байкер Вася стартует с нулевого километра МКАД и едет со скоростью v километров в час.
На какой отметке он остановится через t часов?
*/
#include <iostream>
#include <string>
int main()
{
    int v,t;
    std::cout << "MKAD Driver\n" << "Enter 2 numbers which are speed(km per hour) and time (in hours) separated by a space in one line. For example: 2 2 \n";
    std::cin>>v>>t;
    int s = v*t;
    if (s > 109)
    {
        std::cout <<"Vasya drove the entire MKAD(109km) and drove beyond it "<< (v*t) - 109<< " killometers"; 
    }
    else
    {
        std::cout << (v*t)<<" - km's Vasya drove and "<< 109 - (v*t) << " killometers of road are left";
    }
}



