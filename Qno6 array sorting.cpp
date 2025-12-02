#include <iostream>
using namespace std;
// Function to sort the array in ascending order
void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[i]) {
                // Swap elements
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
// Function to display the array
void displayArray(int arr[], int size) {
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int size;
    // Taking size of array from user
    cout << "Enter the number of elements: ";
    cin >> size;
    int arr[size];
    // Input elements in array
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "\nBefore Sorting:\n";
    displayArray(arr, size);
// Call sorting function
    sortArray(arr, size);
  cout << "\nAfter Sorting in Ascending Order:\n";
    displayArray(arr, size);
 return 0;
}
