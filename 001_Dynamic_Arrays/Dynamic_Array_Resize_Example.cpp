#include <iostream>
using namespace std;

// Function to resize the array
void resizeArray(int*& arr, int oldSize, int newSize) {
    // Step 1: Allocate new memory for a bigger array
    int* newArr = new int[newSize];

    // Step 2: Copy the old array's data into the new array
    for (int i = 0; i < oldSize; i++) {
        newArr[i] = arr[i];
    }

    // Step 3: Delete the old array to free memory
    delete[] arr;

    // Step 4: Update the pointer to point to the new array
    arr = newArr;
}

int main() {
    // Initial size of the dynamic array
    int size = 5;
    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Resizing the array
    int newSize = 10;
    resizeArray(arr, size, newSize);

    for (int i = size; i < newSize; i++) {
        arr[i] = (i + 1) * 2;
    }

    cout << "Resized array: ";
    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Free memory after use
    delete[] arr;

    return 0;
}
