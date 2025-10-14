#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

// Проверка на квадрат
bool isSquare(long long num) {
    long long root = sqrt(num);
    return root * root == num;
}

// рекурсивное разложение на множители
void findFactors(int num, vector<int>& factors) {
    // Если число 1 - выходим
    if (num == 1) return;
    
    // простое ли число
    bool prime = true;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            prime = false;
            break;
        }
    }
    
    // Если да - то в множители
    if (prime) {
        factors.push_back(num);
        return;
    }
    
    // метод Ферма
    int start = ceil(sqrt(num));  // Начинаем с корня
    int diff = start * start - num;  // Разность квадратов
    
    // Ищем подходящую разность
    while (!isSquare(diff)) {
        start++;
        diff = start * start - num;
    }
    
    // Находим множители
    int root = sqrt(diff);
    int factor1 = start - root;
    int factor2 = start + root;
    
    // Рекурсивно разлагаем оба множителя
    findFactors(factor1, factors);
    findFactors(factor2, factors);
}

// Главная функция факторизации
void factorize(int num) {
    // Метод Ферма работает только с нечетными
    if (num % 2 == 0) {
        cout << "Only odd" << endl;
        return;
    }
    
    cout << "Factorizing " << num << " by Ferma method:" << endl;
    
    vector<int> factors;
    findFactors(num, factors);
    
    // Выводим результат
    cout << "Answer: ";
    for (int i = 0; i < factors.size(); i++) {
        if (i > 0) cout << " * ";
        cout << factors[i];
    }
    cout << " = " << num << endl;
}

int main() {
    int num;
    cout << "Enter a odd nubmer: ";
    cin >> num;
    
    factorize(num);
    
    return 0;
}
