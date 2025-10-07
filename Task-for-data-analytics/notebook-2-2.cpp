#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<bool> sieveOfEratosthenes(int n) {
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    
    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    return isPrime;
}

void factorize(int n) {
    if (n <= 1) {
        cout << "The number need to be more than 1" << endl;
        return;
    }
    
    cout << "factorize" << n << ": ";
    
    vector<bool> isPrime = sieveOfEratosthenes(sqrt(n) + 1);
    
    for (int i = 2; i <= n; i++) {
        if (i < isPrime.size() && !isPrime[i]) continue;
        
        int count = 0;
        while (n % i == 0) {
            count++;
            n /= i;
        }
        
        if (count > 0) {
            cout << i;
            if (count > 1) {
                cout << "^" << count;
            }
            if (n > 1) cout << " * ";
        }
        
        if (n == 1) break;
    }
    
    cout << endl;
}

int main() {
    int number;
    cout << "Enter 1 number for factorize: ";
    cin >> number;
    
    factorize(number);
    
    return 0;
}
