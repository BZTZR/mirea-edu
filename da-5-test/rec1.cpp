#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int a, b;
    cout << "enter 2 numbers(0 & 0 will get an error): ";
    while (true) {
        if (!(cin >> a >> b)) { 
            cout << "Entering error. Enter 2 numbers: ";
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        
        a = abs(a);
        b = abs(b);

        if (a == 0 && b == 0) {
            cout << "2 numbers can't be 0 & 0. Enter again: ";
            continue;
        }
        break;
    }

    cout << "result = " << gcd(a, b) << endl;
    return 0;
}
