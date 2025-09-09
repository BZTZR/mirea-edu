#include <iostream>
#include <string>
int main()
{
    int v,t;
    std::cout << "Enter 2 numbers through namespace. For example: 2 2 \n";
    std::cin>>v>>t;
    int s = v*t;
    if (s > 109)
    {
        std::cout <<"Vasya drove the entire MKAD(109km) and drove beyond it "<< (v*t)%109<< " killometers"; 
    }
    else
    {
        std::cout << (v*t)<<" - km's Vasya drove and "<< 109 - (v*t) << " killometers of road are left";
    }
}

