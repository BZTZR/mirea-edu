#include <iostream>
using namespace std;

int main() {
    long long A, B;
    char op;
    cout << "Enter 2 numbers and arithmetic operation symbol through space\n. Follow the instructions. For example input: 4 + 5 or 51 * 12\n";
    cin >> A >> op >> B;
    
    switch(op) {
        case '+':
            cout << A + B;
            break;
        case '-':
            cout << A - B;
            break;
        case '*':
            cout << A * B;
            break;
        case '/':
            if (B == 0) {
                cout << "Division by zero";
            } else {
                cout << A / B;
            }
            break;
        default:
            cout << "unknown operator";
    }
    
    return 0;
}
