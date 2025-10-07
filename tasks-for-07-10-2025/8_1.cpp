#include <iostream>

int main() {
    int N;
    std::cin >> N;
    double* p = new double;
    *p = N;
    double** pp = &p;
    std::cout << **pp << std::endl;
    delete p;
    return 0;
}
