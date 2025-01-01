#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c; 
    cout << "Please enter the number of rows for the 2D Array: ";
    cin >> r;
    cout << "Please enter the number of columns for the 2D Array: ";
    cin >> c;
    int matrix[r][c];
    cout << "Enter elements for the 2D Array:" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << "Element at position (" << i << ", " << j << "): ";
            cin >> matrix[i][j];
        }
    }
    cout << "\nThe 2D Array is:" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
