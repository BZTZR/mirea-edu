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
    
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 3 == 0) {
            count++;
        }
    }
    
    int* newArr = new int[count];
    
    int index = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 3 == 0) {
            newArr[index] = arr[i];
            index++;
        }
    }
    
    cout << "dividing by 3: ";
    for (int i = 0; i < count; i++) {
        cout << newArr[i] << " ";
    }
    cout << endl;  

    delete[] newArr;
    delete[] arr;
    return 0;
}
