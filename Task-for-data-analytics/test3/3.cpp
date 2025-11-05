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

std::vector<int> digitwiseSum(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> s;
    size_t n = std::max(a.size(), b.size());
    for (size_t i = 0; i < n; ++i) {
        int ai = (i < a.size()) ? a[i] : 0;
        int bi = (i < b.size()) ? b[i] : 0;
        s.push_back((ai + bi) % 10);
    }
    return s;
}

std::vector<int> getCarry(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> c(1, 0);
    size_t n = std::max(a.size(), b.size());
    for (size_t i = 0; i < n; ++i) {
        int ai = (i < a.size()) ? a[i] : 0;
        int bi = (i < b.size()) ? b[i] : 0;
        c.push_back((ai + bi) / 10);
    }
    return c;
}

std::vector<int> fastAdd(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> x = a, y = b;
    while (true) {
        auto s = digitwiseSum(x, y);
        auto c = getCarry(x, y);
        if (std::all_of(c.begin(), c.end(), [](int d) { return d == 0; })) {
            while (s.size() > 1 && s.back() == 0) s.pop_back();
            return s;
        }
        x = s;
        y = c;
    }
}

int main() {
    std::cout << "Enter first number: ";
    auto a = readNumber();
    std::cout << "Enter second number: ";
    auto b = readNumber();
    auto res = fastAdd(a, b);
    std::cout << "Fast sum: ";
    printNumber(res);
    return 0;
}
