#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    // Создаем матрицу n x n
    vector<vector<int>> matrix(n, vector<int>(n));
    
    // Заполняем матрицу по правилам
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j < n - 1) {
                matrix[i][j] = 0;  // Выше побочной диагонали
            } else if (i + j == n - 1) {
                matrix[i][j] = 1;  // На побочной диагонали
            } else {
                matrix[i][j] = 2;  // Ниже побочной диагонали
            }
        }
    }
    
    // Выводим матрицу
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j];
            if (j < n - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}
