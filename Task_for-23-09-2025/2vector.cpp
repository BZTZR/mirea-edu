#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j < n - 1) {
                matrix[i][j] = 0;
            } else if (i + j == n - 1) {
                matrix[i][j] = 1;  
            } else {
                matrix[i][j] = 2; 
            }
        }
    }
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
