#include <iostream>
#include <cmath>
using namespace std;

double f(double x) {
    return acos(x) - sqrt(1 - 0.3*x*x*x);
}

int main() {
    double a = 0.0, b = 1.0;
    double eps = 0.001;
    double x = a;
    
    for (int i = 0; i < 20; i++) {
        double x_new = x - (f(x) * (b - x)) / (f(b) - f(x));
        if (fabs(x_new - x) < eps) break;
        x = x_new;
    }
    
    cout << "Sqrt through HORDA METHOD: x = " << x;
    return 0;
}
