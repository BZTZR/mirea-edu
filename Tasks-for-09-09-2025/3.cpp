/*
Задача 3. Гипотенуза
Даны два числа a и b.
Найдите гипотенузу прямоугольного треугольника с катетами a и b.
*/
#include <iostream>
#include <cmath>
int main()
{
    int a,b;
    std::cout << "The hypotenuse finder \n" << "Enter 2 cathets separated by a space in one line. For example: 2 2 \n";
    std::cin>>a>>b;
    std::cout << sqrt(pow(a,2)+pow(b,2))<<" - The hypotenuse of the triangle";
}

