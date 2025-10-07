#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

bool isPerfectSquare(long long n) {
    long long root = sqrt(n);
    return root * root == n;
}

void fermatFactorization(int n) {
    if (n % 2 == 0) {
        cout << "Only odd numbers" << endl;
        return;
    }
    
    cout << "Factorization of number " << n << " by Fermat method:" << endl;
    
    int a = ceil(sqrt(n));
    int b2 = a * a - n;
    
    while (!isPerfectSquare(b2)) {
        a++;
        b2 = a * a - n;
    }
    
    int b = sqrt(b2);
    int factor1 = a - b;
    int factor2 = a + b;
    
    cout << "Multipliers: " << factor1 << " * " << factor2 << " = " << n << endl;
    cout << "Check: " << factor1 << " * " << factor2 << " = " << factor1 * factor2 << endl;
}

int main() {
    int number;
    cout << "Enter an odd number for the Fermat factorization: ";
    cin >> number;
    
    fermatFactorization(number);
    
    return 0;
}
