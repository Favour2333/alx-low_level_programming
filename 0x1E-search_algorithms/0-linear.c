#include <stdio.h>

int linear_search(int arr[], int n, int x) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = { 2, 4, 6, 8, 10 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 8;
    int result = linear_search(arr, n, x);
    if (result == -1) {
        printf("Element not found.\n");
    } else {
        printf("Element found at index %d.\n", result);
    }
    return 0;
}
