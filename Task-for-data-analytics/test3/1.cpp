#include <iostream>
#include <vector>
using namespace std;
vector<int> readNumber() {
    string s;
    cin >> s;
    vector<int> a;
    for (int i = s.size() - 1; i >= 0; --i)
        a.push_back(s[i] - '0');
    return a;
}

void printNumber(const vector<int>& a) {
    for (int i = a.size() - 1; i >= 0; --i)
        cout << a[i];
}

bool greaterOrEqual(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) return a.size() > b.size();
    for (int i = a.size() - 1; i >= 0; --i)
        if (a[i] != b[i]) return a[i] > b[i];
    return true;
}

vector<int> add(const vector<int>& a, const vector<int>& b) {
    vector<int> res;
    int carry = 0;
    size_t i = 0;
    while (i < a.size() || i < b.size() || carry) {
        int sum = carry;
        if (i < a.size()) sum += a[i];
        if (i < b.size()) sum += b[i];
        res.push_back(sum % 10);
        carry = sum / 10;
        ++i;
    }
    return res;
}

vector<int> subtract(const vector<int>& a, const vector<int>& b) {
    vector<int> res = a;
    int borrow = 0;
    for (size_t i = 0; i < b.size(); ++i) {
        res[i] -= b[i] + borrow;
        if (res[i] < 0) {
            res[i] += 10;
            borrow = 1;
        } else borrow = 0;
    }
    while (borrow && res.size() > 1) {
        res[res.size() - 1] -= borrow;
        borrow = 0;
    }
    while (res.size() > 1 && res.back() == 0) res.pop_back();
    return res;
}

int main() {
    cout << "Enter first number: ";
    auto a = readNumber();
    cout << "Enter second number: ";
    auto b = readNumber();

    auto sum = add(a, b);
    cout << "\nSum: ";
    printNumber(sum);

    if (greaterOrEqual(a, b)) {
        auto diff = subtract(a, b);
        cout << "\nDifference (a - b): ";
        printNumber(diff);
    } else {
        auto diff = subtract(b, a);
        cout << "\nDifference (b - a): -";
        printNumber(diff);
    }
    cout << endl;
    return 0;
}
