#include <iostream>
#include <vector>

std::vector<int> readNumber() {
    std::string s;
    std::cin >> s;
    std::vector<int> a;
    for (int i = s.size() - 1; i >= 0; --i)
        a.push_back(s[i] - '0');
    return a;
}

void printNumber(const std::vector<int>& a) {
    for (int i = a.size() - 1; i >= 0; --i)
        std::cout << a[i];
}

std::vector<int> multiply(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> res(a.size() + b.size(), 0);
    for (size_t i = 0; i < a.size(); ++i) {
        int carry = 0;
        for (size_t j = 0; j < b.size() || carry; ++j) {
            long long cur = res[i + j] + carry;
            if (j < b.size()) cur += (long long)a[i] * b[j];
            res[i + j] = cur % 10;
            carry = cur / 10;
        }
    }
    while (res.size() > 1 && res.back() == 0) res.pop_back();
    return res;
}

int main() {
    std::cout << "Enter first number: ";
    auto a = readNumber();
    std::cout << "Enter second number: ";
    auto b = readNumber();
    auto res = multiply(a, b);
    std::cout << "Product: ";
    printNumber(res);
    return 0;
}
