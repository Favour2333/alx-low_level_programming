#include <stdio.h>

int binary_search(int arr[], int left, int right, int x) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x) {
            return mid;
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = { 2, 4, 6, 8, 10 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 8;
    int result = binary_search(arr, 0, n - 1, x);
    if (result == -1) {
        printf("Element not found.\n");
    } else {
        printf("Element found at index %d.\n", result);
    }
    return 0;
}

