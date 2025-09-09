/*
Задача 2. Арифметические операции
Даны два числа A и B (не превосходящие по модулю 2 147 483 647), которые вводятся через пробел.
Напишите программу, которая выводит через пробел:

их сумму A + B,
разность A - B,
произведение A * B,
частное A / B.
*/
#include <iostream>
int main()
{
    int a,b;
    std::cout<< "Enter 2 numbers separated by a space in one line. For example: 2 2 \n";
    std::cin>>a>>b;
    std::cout<< a+b<<" - the result of the addition"<<"\n"<<a - b<< " - the result of the subtraction"<<"\n";
    std::cout<< a*b<<" - the result of the multiplication"<<"\n"<<a / b<< " - the result of the division"<<"\n";
}

