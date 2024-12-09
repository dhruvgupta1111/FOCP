#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    int temp = a;
    a = b;
    b = temp;
    printf("After swapping using temp variable: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping using arithmetic operators: a = %d, b = %d\n", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After swapping using bitwise XOR: a = %d, b = %d\n", a, b);

    return 0;
}