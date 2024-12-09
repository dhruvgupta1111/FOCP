#include <stdio.h>
#include <math.h>

int main() {
    int num1, num2, choice;
    float result;

    printf("Simple Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Logarithmic value\n");
    printf("6. Square root\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            result = num1 + num2;
            printf("Sum: %.2f\n", result);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            result = num1 - num2;
            printf("Difference: %.2f\n", result);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            result = num1 * num2;
            printf("Product: %.2f\n", result);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            if (num2 == 0) {
                printf("Error: Division by zero is not possible.\n");
            } else {
                result = (float)num1 / num2;
                printf("Division: %.2f\n", result);
            }
            break;

        case 5:
            printf("Enter a number: ");
            scanf("%d", &num1);
            if (num1 <= 0) {
                printf("Error: Logarithm of non-positive number is not valid.\n");
            } else {
                result = log10(num1);
                printf("Logarithmic value: %.2f\n", result);
            }
            break;

        case 6:
            printf("Enter a number: ");
            scanf("%d", &num1);
            if (num1 < 0) {
                printf("Error: Square root of negative number is not valid.\n");
            } else {
                result = sqrt(num1);
                printf("Square root: %.2f\n", result);
            }
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
