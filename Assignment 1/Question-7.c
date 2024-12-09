#include <stdio.h>
#include <math.h>

int main() {
    int choice, num, binaryNum, decimalNum, remainder, i = 1, j;

    printf("Enter your choice:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter a binary number: ");
            scanf("%d", &binaryNum);
            decimalNum = 0;
            while (binaryNum != 0) {
                remainder = binaryNum % 10;
                decimalNum += remainder * i;
                i *= 2;
                binaryNum /= 10;
            }
            printf("Decimal equivalent: %d\n", decimalNum);
            break;

        case 2:
            printf("Enter a decimal number: ");
            scanf("%d", &decimalNum);
            binaryNum = 0;
            i = 1;
            while (decimalNum != 0) {
                remainder = decimalNum % 2;
                binaryNum += remainder * i;
                decimalNum /= 2;
                i *= 10;
            }
            printf("Binary equivalent: %d\n", binaryNum);
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}