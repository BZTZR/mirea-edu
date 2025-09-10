#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a = 0.0;        
    double b = 1.0;        
    double eps = 0.001; 
    
    while (b - a > eps) {
        double mid = (a + b) / 2;
        double f_mid = acos(mid) - sqrt(1 - 0.3*mid*mid*mid);
        
        if (f_mid > 0) {
            a = mid;  
        } else {
            b = mid;  
        }
        cout<<a<<" "<<b<<"\n";
    }
    
    double root = (a + b) / 2;
    cout << "Sqrt: x = " << root << " +- " << eps;
    
    return 0;
}
