#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    int w;
    cin >> w;
    
    // Создаем поле для грибов (true - есть гриб)
    vector<vector<bool>> mushrooms(n, vector<bool>(m, false));
    
    // Создаем поле для результата
    vector<vector<char>> result(n, vector<char>(m, '0'));
    
    // Читаем координаты грибов
    for (int i = 0; i < w; i++) {
        int x, y;
        cin >> x >> y;
        // Преобразуем в индексы (предполагаем, что координаты начинаются с 1)
        mushrooms[x-1][y-1] = true;
        result[x-1][y-1] = '*';
    }
    
    // Заполняем поле количеством грибов вокруг
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (result[i][j] != '*') {
                int count = 0;
                
                // Проверяем все 8 соседних клеток
                for (int dx = -1; dx <= 1; dx++) {
                    for (int dy = -1; dy <= 1; dy++) {
                        if (dx == 0 && dy == 0) continue; // Пропускаем текущую клетку
                        
                        int ni = i + dx;
                        int nj = j + dy;
                        
                        // Проверяем границы
                        if (ni >= 0 && ni < n && nj >= 0 && nj < m) {
                            if (mushrooms[ni][nj]) {
                                count++;
                            }
                        }
                    }
                }
                
                result[i][j] = '0' + count;
            }
        }
    }
    
    // Выводим результат
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << result[i][j];
            if (j < m - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}
