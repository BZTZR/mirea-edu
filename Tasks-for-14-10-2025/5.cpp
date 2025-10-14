#include <iostream>
using namespace std;

void prost(int n) {
    for (int i = 2; i <= n; i++) {
        bool prime = true;
        
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                prime = false;
                break;
            }
        }
        
        if (prime) {
            cout << i << " ";
        }
    }
}

int main() {
    int n;
    cin >> n;
    prost(n);
    return 0;
}
