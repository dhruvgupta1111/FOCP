#include <stdio.h>

int subtract(int a, int b) {
    while (b != 0) {
        int borrow = (~a & b) << 1;
        a = a ^ b;
        b = borrow;
    }
    return a;
}

int main() {
    int a, b, result;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    result = subtract(a, b);

    printf("The result of %d - %d is %d\n", a, b, result);

    return 0;
}