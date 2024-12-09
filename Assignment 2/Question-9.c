#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int i;
    for (i = 1; i < n - 1; i++) {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            printf("Peak element is %d at index %d\n", arr[i], i);
            return 0;
        }
    }

    if (arr[0] >= arr[1]) {
        printf("Peak element is %d at index 0\n", arr[0]);
    } else if (arr[n - 1] >= arr[n - 2]) {
        printf("Peak element is %d at index %d\n", arr[n - 1], n - 1);
    } else {
        printf("No peak element found.\n");
    }

    return 0;
}