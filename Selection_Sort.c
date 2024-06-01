#include <stdio.h>

void Selectionsort(int A[], int n) {
    int i, j, index_min, temp;
    for (i = 0; i < n - 1; i++) {
        index_min = i;
        for (j = i + 1; j < n; j++) {
            if (A[j] < A[index_min]) {
                index_min = j;
            }
        }
        if (index_min != i) {
            temp = A[i];
            A[i] = A[index_min];
            A[index_min] = temp;
        }
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
    Selectionsort(A, n);
    printf("Sorted array: ");
    printArray(A, n);

    return 0;
}
