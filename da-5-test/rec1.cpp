#include <iostream>
using namespace std;

int gcd_sub(int a, int b) {
    if (a == b)
        return a;
    if (a > b)
        return gcd_sub(a - b, b);
    else
        return gcd_sub(a, b - a);
}

int main() {
    int a, b;

    cout << "Enter two integers (not both zeros): ";
    while (true) {
        if (!(cin >> a >> b)) {
            cout << "Input error. Enter two integers: ";
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        a = abs(a);
        b = abs(b);

        if (a == 0 && b == 0) { 
            cout << "Both numbers cannot be zero. Try again: ";
            continue;
        }
        break;
    }

    if (a == 0 || b == 0)
        cout << "GCD = " << (a == 0 ? b : a) << endl;
    else
        cout << "GCD = " << gcd_sub(a, b) << endl;

    return 0;
}
