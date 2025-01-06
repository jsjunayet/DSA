#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter your array size: ";
    cin >> n;
    int a[n];

    // অ্যারে ইনপুট নেওয়া
    cout << "Enter " << n << " elements for the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // অ্যারে প্রদর্শন
    cout << "Initial array:\n";
    for (int i = 0; i < n; i++) {
        cout << "Index " << i << " and value: " << a[i] << endl;
    }

    int index;
    cout << "Enter the index you want to update in this array: ";
    cin >> index;

    int value;
    cout << "Enter the value you want to update at index " << index << ": ";
    cin >> value;

    // ইনডেক্স চেক এবং মান আপডেট
    if (index >= 0 && index < n) {
        cout << "Updating value at index " << index << "...\n";
        cout << "Deleted item: " << a[index] << endl; // আগের মান প্রদর্শন
        a[index] = value; // নতুন মান আপডেট
    } else {
        cout << "Invalid index!\n";
    }

    // আপডেট হওয়া অ্যারে প্রদর্শন
    cout << "Updated array:\n";
    for (int i = 0; i < n; i++) {
        cout << "Index " << i << " and value: " << a[i] << endl;
    }

    return 0;
}
