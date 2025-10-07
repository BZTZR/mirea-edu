#include <iostream>
#include <cmath>
using namespace std;

bool lucas_lehmer(int p) {
    if (p == 2) return true; 
    long long mersenne = (1LL << p) - 1; 
    long long s = 4;
    for (int i = 0; i < p - 2; i++) {
        s = (s * s - 2) % mersenne;
    }
    return s == 0;
}

int main() {
    int p;
    cout << "Enter the Mersenne number (p): ";
    cin >> p;
    if (lucas_lehmer(p)) {
        cout << "2^" << p << " - 1 is simple" << endl;
    } else {
        cout << "2^" << p << " - 1 it is a composite" << endl;
    }
    return 0;
}
