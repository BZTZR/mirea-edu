#include <iostream>
#include <vector>

std::vector<int> readBinary() {
    std::string s;
    std::cin >> s;
    std::vector<int> a;
    for (int i = s.size() - 1; i >= 0; --i)
        a.push_back(s[i] - '0');
    return a;
}

void printBinary(const std::vector<int>& a) {
    for (int i = a.size() - 1; i >= 0; --i)
        std::cout << a[i];
}

std::vector<int> bitwiseAdd(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> sum;
    size_t n = std::max(a.size(), b.size());
    for (size_t i = 0; i < n; ++i) {
        int ai = (i < a.size()) ? a[i] : 0;
        int bi = (i < b.size()) ? b[i] : 0;
        sum.push_back((ai + bi) % 2);
    }
    return sum;
}

std::vector<int> carry(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> c(1, 0);
    size_t n = std::max(a.size(), b.size());
    for (size_t i = 0; i < n; ++i) {
        int ai = (i < a.size()) ? a[i] : 0;
        int bi = (i < b.size()) ? b[i] : 0;
        c.push_back((ai + bi) / 2);
    }
    return c;
}

std::vector<int> addBinary(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> x = a, y = b;
    while (true) {
        auto s = bitwiseAdd(x, y);
        auto c = carry(x, y);
        if (std::all_of(c.begin(), c.end(), [](int d) { return d == 0; })) {
            while (s.size() > 1 && s.back() == 0) s.pop_back();
            return s;
        }
        x = s;
        y = c;
    }
}

int main() {
    std::cout << "Enter first binary number: ";
    auto a = readBinary();
    std::cout << "Enter second binary number: ";
    auto b = readBinary();
    auto res = addBinary(a, b);
    std::cout << "Sum: ";
    printBinary(res);
    return 0;
}
