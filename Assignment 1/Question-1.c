#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, digit, exp = 0, sum = 0;
    scanf("%d", &num);
    temp = num;
    while (temp != 0) {
        temp /= 10;
        exp++;
    }
    temp = num;
    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, exp);
        temp /= 10;
    }
    if (sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    return 0;
}