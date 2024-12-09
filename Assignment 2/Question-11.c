#include <stdio.h>

#define MAX_SIZE 100  

int main() {

    int arr[MAX_SIZE] = {10, 20, 30, 40, 50}; Ini  

   
    printf("Original Array:\n");
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("\nInserting at the front (element: 5):\n");
    for (int i = size; i > 0; i--) {
        arr[i] = arr[i - 1];  
    }
    arr[0] = 5;  
    size++;  

    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("\nInserting at position 2 (element: 25):\n");
    int position = 2;
    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];  
    }
    arr[position] = 25; 
    size++;  

    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("\nInserting at the end (element: 60):\n");
    arr[size] = 60;  
    size++;  

    
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
