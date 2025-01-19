// #include<bits/stdc++.h>
// using namespace std;
// int main (){
//   int n, e;
//   cin>>n>>e;
//   vector<pair<int, int>> v;
//   while (e--)
//   {
//     int a,b;
//     cin>>a>>b;
//     v.push_back({a,b});
//   }
//   for(auto x:v){
//     cout<<x.first<<" "<<x.second<<endl;
//   }

//     return 0;
// }
#include<iostream>
#include<climits>
#include<cstdlib>
using namespace std;

// The given array and 'k' value (3rd smallest element in this case)
int arr[] = {12, 3, 5, 7, 4, 19, 26};
int n = sizeof(arr)/sizeof(arr[0]), k = 3;

// Function to print a portion of the array
void printArray(int l, int r) {
    cout << "The array from l = " << l << " to r = " << r << " is: ";
    for (int i = l; i <= r; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

// Function to swap two elements in the array
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function to divide the array into two parts
int partition(int arr[], int l, int r) {
    int x = arr[r]; // Pivot element
    int i = l;      // Index to track smaller elements
    for (int j = l; j <= r - 1; j++) {
        if (arr[j] <= x) {  // If the element is smaller than or equal to the pivot
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[i], &arr[r]);  // Place pivot in correct position
    return i;
}

// Random partition to avoid worst-case scenario
int randomPartition(int arr[], int l, int r) {
    int pivot = rand() % (r - l + 1); // Randomly choose pivot
    swap(&arr[l + pivot], &arr[r]);   // Swap pivot with the last element
    return partition(arr, l, r);       // Perform partition
}

// Function to find the k-th smallest element
int kthSmallest(int arr[], int l, int r, int k) {
    if (k > 0 && k <= r - l + 1) {  // If k is within the valid range
        int pos = randomPartition(arr, l, r);  // Get pivot position
        if (pos - l == k - 1) {
            return arr[pos];  // The k-th smallest element is found
        }
        if (pos - l > k - 1) {
            return kthSmallest(arr, l, pos - 1, k);  // Search in the left part
        } else {
            return kthSmallest(arr, pos + 1, r, k - pos + l - 1);  // Search in the right part
        }
    }
    return INT_MAX;  // Invalid k
}

int main() {
    int val = kthSmallest(arr, 0, n - 1, k);
    cout << "K'th smallest element is " << val;
    return 0;
}
