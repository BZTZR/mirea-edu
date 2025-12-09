/*
Задача 1. Сумма двух чисел
Даны два числа A и B (не превосходящие по модулю 2 147 483 647), которые вводятся через пробел.
Напишите программу, которая выводит их сумму.
*/
#include <iostream>
int main()
{
    int a,b;
    std::cout<< "Enter 2 number separated by a space in one line. For example: 2 2 \n";
    std::cin>>a>>b;
    std::cout<< a+b<<" - the sum of entered numbers";
}

