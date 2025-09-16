#include <iostream>
using namespace std;

int BS(int arr[], int n, int target, bool& found) {
    int first = 0;
    int last = n - 1;
    found = false;
    
    while (first <= last) {
        int mid = first + (last - first) / 2;
        
        if (arr[mid] == target) {
            found = true;
            return mid;
        } else if (arr[mid] < target) {
            first = mid + 1;
        } else {
            last = mid - 1;
        }
    }
    
    return first;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int n = 8;
    int target = 6;
    
    bool found;
    int position = BS(arr, n, target, found);
    
    if (found) {
        cout << "Element found at position: " << position << endl;
    } else {
        cout << "Element not found. Can be inserted at position: " << position << endl;
    }
    
    return 0;
}
