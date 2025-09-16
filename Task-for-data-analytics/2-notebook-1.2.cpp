#include <iostream>
using namespace std;

bool isMountain(int arr[], int n) {
    if (n < 3) return false; 
    
    int i = 0;
    
    // Ascending
    while (i < n - 1 && arr[i] < arr[i + 1]) {
        i++;
    }
    
    // Check: peak cannot be first or last
    if (i == 0 || i == n - 1) return false;
    
    // Descending
    while (i < n - 1 && arr[i] > arr[i + 1]) {
        i++;
    }
    
    return i == n - 1;
}

int main() {
    int arr[] = {1, 3, 5, 4, 2};
    int n = 5;
    
    if (isMountain(arr, n)) {
        cout << "Array is mountain" << endl;
        

        int peak_index = 0;
        for (int i = 1; i < n; i++) {
            if (arr[i] > arr[peak_index]) {
                peak_index = i;
            }
        }
        cout << "Peak index: " << peak_index << endl;
    } else {
        cout << "Array is not mountain" << endl;
    }
    
    return 0;
}
