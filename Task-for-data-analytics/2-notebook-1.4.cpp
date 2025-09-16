#include <iostream>
using namespace std;

void countSmaller(int nums[], int n, int result[]) {
    for (int i = 0; i < n; i++) {
        int count = 0;
        
        for (int j = i + 1; j < n; j++) {
            if (nums[j] < nums[i]) {
                count++;
            }
        }
        
        result[i] = count;
    }
}

int main() {
    int nums[] = {5, 2, 6, 1};
    int n = 4;
    int result[4];
    
    countSmaller(nums, n, result);
    
    cout << "Result: ";
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    
    return 0;
}
