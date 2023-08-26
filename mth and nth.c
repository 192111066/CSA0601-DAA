#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int minIndex = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(&arr[i], &arr[minIndex]);
    }
}
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int m;
    printf("Enter the values of m and n: ");
    scanf("%d %d", &m, &n);
    selectionSort(arr, n);
    int mth_max = arr[n - m];
    int nth_min = arr[n - 1];
    int sum = mth_max + nth_min;
    int difference = mth_max - nth_min;
    printf("mth maximum: %d\n", mth_max);
    printf("nth minimum: %d\n", nth_min);
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);  
    return 0;
}
