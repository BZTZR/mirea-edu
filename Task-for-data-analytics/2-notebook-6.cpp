#include <iostream>
#include <vector>
using namespace std;

vector<int> sieve_sundaram(int n) {
    int k = (n - 1) / 2;
    vector<bool> marked(k + 1, false);
    
    for (int i = 1; i <= k; i++) {
        for (int j = i; (i + j + 2 * i * j) <= k; j++) {
            marked[i + j + 2 * i * j] = true;
        }
    }
    
    vector<int> primes;
    primes.push_back(2);
    for (int i = 1; i <= k; i++) {
        if (!marked[i]) {
            primes.push_back(2 * i + 1);
        }
    }
    return primes;
}

int main() {
    int limit;
    cout << "Enter an upper bound to search for prime numbers: ";
    cin >> limit;
    
    vector<int> primes = sieve_sundaram(limit);
    cout << "Prime numbers up to " << limit << ":" << endl;
    for (int prime : primes) {
        cout << prime << " ";
    }
    cout << endl;
    
    return 0;
}
