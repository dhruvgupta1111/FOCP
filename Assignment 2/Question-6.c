#include <stdio.h>

int main() {
    int marks[10], i, sum = 0, average;

    printf("Enter marks for 10 students:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &marks[i]);
    }

    for (i = 0; i < 10; i++) {
        sum += marks[i];
    }

    average = sum / 10;

    printf("Average score: %d\n", average);

    return 0;
}