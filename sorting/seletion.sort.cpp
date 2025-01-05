#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) { // Outer loop for unsorted section
        int minIndex = i; // Assume the first element is the minimum
        for (int j = i + 1; j < n; j++) { // Inner loop to find the minimum
            if (arr[j] > arr[minIndex]) {
                minIndex = j; // Update the minimum index
            }
        }
        // Swap the minimum element with the first element of the unsorted part
        swap(arr[i], arr[minIndex]);

        // Print the array after each iteration (optional for debugging)
        cout << "Array after iteration " << i + 1 << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selectionSort(arr, n);

    cout << "Sorted array in ascending order: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
