#include <iostream>
using namespace std;

int main() {
    long long A, B;
    char op;
    
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
