#include <iostream>
#include <cmath>
int main()
{
    int a,b;
    std::cout << "The hypotenuse finder \n" << "Enter 2 numbers through namespace. For example: 2 2 \n";
    std::cin>>a>>b;
    std::cout << sqrt(pow(a,2)+pow(b,2))<<" - The hypotenuse of the triangle";
}
