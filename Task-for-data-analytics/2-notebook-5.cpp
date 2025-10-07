#include <iostream>
using namespace std;

int von_neumann(int current) {
    long long squared = (long long)current * current;
    return (squared / 100) % 100000;
}

int main() {
    int seed;
    cout << "Enter the initial 5-digit number: ";
    cin >> seed;

    cout << "A sequence of 10 numbers:" << endl;
    int current = seed;
    for (int i = 0; i < 10; i++) {
        current = von_neumann(current);
        cout << current << endl;
    }
    return 0;
}
