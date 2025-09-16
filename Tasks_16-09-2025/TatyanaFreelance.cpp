#include <iostream>
using namespace std;

int main() {
    cout << "Enter 2 numbers through enter. Example: 41 (Enter button) 7 (Enter button)" << endl;
    int A, B;
    cin >> A >> B;
    
    while (A > B) {
        if (A % 2 == 0 && A / 2 >= B) {
            cout << ":2" << endl;
            A = A / 2;
        } else {
            cout << "-1" << endl;
            A = A - 1;
        }
    }
    cout << A << endl;
    return 0;
}
