#include <bits/stdc++.h>
using namespace std;

long long merge(vector<int> &arr, vector<int> &temp, int left, int mid, int right) {
    int i = left;     
    int j = mid + 1;  
    int k = left;     
    long long inv_count = 0; 

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            inv_count += (mid - i + 1); 
        }
    }

    while (i <= mid) {
        temp[k++] = arr[i++];
    }


    while (j <= right) {
        temp[k++] = arr[j++];
    }

    for (i = left; i <= right; i++) {
        arr[i] = temp[i];
    }

    return inv_count;
}


long long mergeSortAndCount(vector<int> &arr, vector<int> &temp, int left, int right) {
    long long inv_count = 0;

    if (left < right) {
        int mid = (left + right) / 2;

        inv_count += mergeSortAndCount(arr, temp, left, mid);
        inv_count += mergeSortAndCount(arr, temp, mid + 1, right);

        inv_count += merge(arr, temp, left, mid, right);
    }

    return inv_count;
}

int main() {
    vector<int> arr = {3, 1, 2};
    int n = arr.size();
    vector<int> temp(n);

    long long inversions = mergeSortAndCount(arr, temp, 0, n - 1);

    cout << "Inversions: " << inversions << endl;

    return 0;
}
