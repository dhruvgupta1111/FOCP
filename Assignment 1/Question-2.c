#include <stdio.h>

int main() {
    int a, b, i, hcf;

   printf("Enter first number: ");
   scanf("%d",&num1);
   
   printf("Enter second number: ");
   scanf("%d",&num2);

    for (i = 1; i <= a && i <= b; ++i) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }

    printf("HCF of %d and %d is %d\n", a, b, hcf);

    return 0;
}