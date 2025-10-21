#include <iostream>

using namespace std;

int main() {
    srand(time(0));
    
    int size;
    
    cout << "Enter the size of array: ";
    cin >> size;
    
    if (size <= 0) {
        cout << "Only a positive number!" << endl;
        return 1;
    }
    
    int* arr = new int[size];
    
    cout << "Array: ";
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    cout << endl;
    
    for (int i = 1; i < size; i += 2) {
        int temp = arr[i];
        arr[i] = arr[i-1];
        arr[i-1] = temp;
    }
    
    cout << "Array after: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    delete[] arr;
    return 0;
}
