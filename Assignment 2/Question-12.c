#include <stdio.h>

int main() {
    int arr[100], size, choice, pos;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) scanf("%d", &arr[i]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");

    printf("1. Delete front\n2. Delete at position\n3. Delete end\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        for (int i = 0; i < size - 1; i++) arr[i] = arr[i + 1];
        size--;
    } else if (choice == 2) {
        printf("Enter position: ");
        scanf("%d", &pos);
        if (pos >= 0 && pos < size) {
            for (int i = pos; i < size - 1; i++) arr[i] = arr[i + 1];
            size--;
        } else {
            printf("Invalid position\n");
            return 0;
        }
    } else if (choice == 3) {
        size--;
    } else {
        printf("Invalid choice\n");
        return 0;
    }

    printf("Array after deletion: ");
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
