#include <iostream>
#include <array>
#include <numeric>
#include <iomanip>

int main() {
    std::array<int, 10> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    double sum = std::accumulate(arr.begin(), arr.end(), 0.0);
    double average = sum / arr.size();

    std::cout << std::fixed << std::setprecision(2) << average << std::endl;

    return 0;
}
