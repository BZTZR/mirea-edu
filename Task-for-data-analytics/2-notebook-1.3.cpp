#include <iostream>
using namespace std;

// Binary search for first positive number
int findFirstPositive(int arr[], int n) {
    int first = 0;
    int last = n - 1;
    int result = n; // If all negative
    
    while (first <= last) {
        int mid = first + (last - first) / 2;
        
        if (arr[mid] > 0) {
            result = mid;
            last = mid - 1;
        } else {
            first = mid + 1;
        }
    }
    
    return result;
}

int main() {
    int arr[] = {-5, -3, -1, 2, 4, 6, 8};
    int n = 7;
    
    int first_positive = findFirstPositive(arr, n);
    int negative_count = first_positive;
    int positive_count = n - first_positive;
    
    cout << "Negative: " << negative_count << endl;
    cout << "Positive: " << positive_count << endl;
    
    if (positive_count > negative_count) {
        cout << "More positive: " << positive_count << endl;
    } else if (negative_count > positive_count) {
        cout << "More negative: " << negative_count << endl;
    } else {
        cout << "Equal quantity" << endl;
    }
    
    return 0;
}
