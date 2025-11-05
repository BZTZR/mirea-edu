#include <iostream>
#include <vector>
#include <string>

std::vector<int> readNumber() {
    std::string s;
    std::cin >> s;
    std::vector<int> a;
    for (int i = s.size() - 1; i >= 0; --i)
        a.push_back(s[i] - '0');
    return a;
}

void printNumber(const std::vector<int>& a) {
    if (a.empty()) { std::cout << 0; return; }
    for (int i = a.size() - 1; i >= 0; --i)
        std::cout << a[i];
}

void trim(std::vector<int>& a) {
    while (a.size() > 1 && a.back() == 0)
        a.pop_back();
}

bool greaterOrEqual(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return a.size() > b.size();
    for (int i = a.size() - 1; i >= 0; --i)
        if (a[i] != b[i]) return a[i] > b[i];
    return true; // равны
}

std::vector<int> add(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> res;
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

std::vector<int> subtract(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> res = a;
    int borrow = 0;
    for (size_t i = 0; i < b.size(); ++i) {
        res[i] -= b[i] + borrow;
        if (res[i] < 0) {
            res[i] += 10;
            borrow = 1;
        } else borrow = 0;
    }
    trim(res);
    return res;
}

std::vector<int> multiply(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.empty() || b.empty() || (a.size() == 1 && a[0] == 0) ||
        (b.size() == 1 && b[0] == 0))
        return {0};
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
    trim(res);
    return res;
}

std::vector<int> divide(const std::vector<int>& A, const std::vector<int>& B) {
    if (B.size() == 1 && B[0] == 0) {
        std::cout << "Error: division by zero\n";
        return {};
    }
    if (!greaterOrEqual(A, B)) {
        return {0};
    }

    std::vector<int> left = {0};
    std::vector<int> right = A;
    std::vector<int> best = {0};

    while (greaterOrEqual(right, left)) {
        std::vector<int> sum = add(left, right);
        std::vector<int> mid;
        int carry = 0;
        for (int i = sum.size() - 1; i >= 0; --i) {
            int cur = carry * 10 + sum[i];
            mid.push_back(cur / 2);
            carry = cur % 2;
        }
        std::reverse(mid.begin(), mid.end());
        trim(mid);
        if (mid.empty()) mid = {0};

        std::vector<int> prod = multiply(B, mid);
        if (greaterOrEqual(A, prod)) {
            best = mid;
            left = add(mid, {1});
        } else {
            if (mid == std::vector<int>{0}) break;
            right = subtract(mid, {1});
        }
    }
    return best;
}

int main() {
    std::cout << "Enter dividend A: ";
    auto A = readNumber();
    std::cout << "Enter divisor B: ";
    auto B = readNumber();

    auto quotient = divide(A, B);
    if (quotient.empty()) return 1;

    auto product = multiply(B, quotient);
    auto remainder = subtract(A, product);

    std::cout << "\nQuotient: ";
    printNumber(quotient);
    std::cout << "\nRemainder: ";
    printNumber(remainder);
    std::cout << std::endl;

    return 0;
}
