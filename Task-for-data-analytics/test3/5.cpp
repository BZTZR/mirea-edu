#include <iostream>
#include <vector>
#include <algorithm>

void printNumber(const std::vector<int>& a) {
    for (int i = a.size() - 1; i >= 0; --i) std::cout << a[i];
}

std::vector<int> readNumber() {
    std::string s; std::cin >> s;
    std::vector<int> a;
    for (int i = s.size() - 1; i >= 0; --i) a.push_back(s[i] - '0');
    return a;
}

void normalize(std::vector<int>& a) {
    while (a.size() > 1 && a.back() == 0) a.pop_back();
}

std::vector<int> add(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> res;
    int carry = 0;
    for (size_t i = 0; i < std::max(a.size(), b.size()) || carry; ++i) {
        int sum = carry;
        if (i < a.size()) sum += a[i];
        if (i < b.size()) sum += b[i];
        res.push_back(sum % 10);
        carry = sum / 10;
    }
    return res;
}

std::vector<int> subtract(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> res = a;
    int borrow = 0;
    for (size_t i = 0; i < b.size(); ++i) {
        res[i] -= b[i] + borrow;
        if (res[i] < 0) { res[i] += 10; borrow = 1; }
        else borrow = 0;
    }
    normalize(res);
    return res;
}

void shift(std::vector<int>& a, int k) {
    a.insert(a.begin(), k, 0);
}

std::vector<int> multiplySimple(const std::vector<int>& a, const std::vector<int>& b) {
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
    normalize(res);
    return res;
}

std::vector<int> karatsuba(const std::vector<int>& x, const std::vector<int>& y) {
    std::vector<int> a = x, b = y;
    normalize(a); normalize(b);
    if (a.size() < 10 || b.size() < 10)
        return multiplySimple(a, b);

    int n = std::max(a.size(), b.size());
    int half = (n + 1) / 2;

    while (a.size() < 2 * half) a.push_back(0);
    while (b.size() < 2 * half) b.push_back(0);

    std::vector<int> a1(a.begin(), a.begin() + half);
    std::vector<int> a0(a.begin() + half, a.end());
    std::vector<int> b1(b.begin(), b.begin() + half);
    std::vector<int> b0(b.begin() + half, b.end());

    auto p1 = karatsuba(a0, b0);
    auto p2 = karatsuba(a1, b1);

    auto sumA = add(a0, a1);
    auto sumB = add(b0, b1);
    auto p3 = karatsuba(sumA, sumB);
    auto p4 = subtract(subtract(p3, p1), p2);

    shift(p2, 2 * half);
    shift(p4, half);

    auto res = add(add(p1, p4), p2);
    normalize(res);
    return res;
}

int main() {
    std::cout << "Enter number A: ";
    auto A = readNumber();
    std::cout << "Enter number B: ";
    auto B = readNumber();

    auto prod1 = multiplySimple(A, B);
    auto prod2 = karatsuba(A, B);

    std::cout << "\nColumn method: ";
    printNumber(prod1);
    std::cout << "\nKaratsuba:      ";
    printNumber(prod2);
    std::cout << std::endl;

    if (prod1 == prod2) std::cout << "Results match!\n";
    else std::cout << "Mismatch!\n";

    return 0;
}
