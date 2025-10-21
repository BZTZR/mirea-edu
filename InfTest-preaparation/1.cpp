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
    
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    double average = sum / size;
    
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < average) {
            count++;
        }
    }
    
    cout << "Average: " << average << endl;
    cout << "Less than average: " << count << endl;
    
    delete[] arr;
    
    return 0;
}
