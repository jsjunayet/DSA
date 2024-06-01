#include <stdio.h>

void insertionSort(int A[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > key) {
            A[j + 1] = A[j];
            j = j - 1;
        }
        A[j + 1] = key;
    }
}

void printArray(int A[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int main() {
    int n, i;
    printf("Please enter the number of elements in the array: ");
    scanf("%d", &n);
    int A[n];
    printf("Please enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    insertionSort(A, n);
    printf("Sorted array: ");
    printArray(A, n);

    return 0;
}
