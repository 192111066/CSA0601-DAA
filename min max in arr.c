#include <stdio.h>

struct MinMax {
    int min;
    int max;
};

struct MinMax findMinMax(int arr[], int left, int right) {
    struct MinMax result, leftMinMax, rightMinMax;

    if (left == right) {
        result.min = arr[left];
        result.max = arr[left];
        return result;
    }

    int mid = left + (right - left) / 2;
    leftMinMax = findMinMax(arr, left, mid);
    rightMinMax = findMinMax(arr, mid + 1, right);

    result.min = (leftMinMax.min < rightMinMax.min) ? leftMinMax.min : rightMinMax.min;
    result.max = (leftMinMax.max > rightMinMax.max) ? leftMinMax.max : rightMinMax.max;

    return result;
}

int main() {
    int arr[] = {8,-5,7,2,6,0,1,9};
    int size = sizeof(arr) / sizeof(arr[0]);

    struct MinMax result = findMinMax(arr, 0, size - 1);

    printf("Minimum value: %d\n", result.min);
    printf("Maximum value: %d\n", result.max);

    return 0;
}
