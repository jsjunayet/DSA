#include <stdio.h>

int LinearSearch(int A[], int x, int n) {
    int left = 0;
    int right = n - 1;
    int mid;
    while (left <= right) {
        mid = (left + right) / 2;
        if (A[mid] == x) {
            return mid;
        } else if (A[mid] > x) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return -1; // যদি এলিমেন্ট পাওয়া না যায়, তাহলে -1 রিটার্ন করবে
}

int main() {
    int n, x, i, index;
    
    // অ্যারের সাইজ ইনপুট
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int A[n];
    
    // অ্যারের এলিমেন্ট ইনপুট
    printf("Enter the elements of the array in sorted order:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    
    // যে এলিমেন্টটি সার্চ করতে চান তা ইনপুট
    printf("Enter the element to search: ");
    scanf("%d", &x);

    // লিনিয়ার সার্চ কল
    index = LinearSearch(A, x, n);

    // রেজাল্ট প্রিন্ট
    if (index != -1) {
        printf("Element %d found at index %d.\n", x, index);
    } else {
        printf("Element %d not found in the array.\n", x);
    }

    return 0;
}
