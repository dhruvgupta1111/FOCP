#include <stdio.h>

int main() {
    int marks[10], i, max, min;

    printf("Enter marks for 10 students:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &marks[i]);
    }

    max = min = marks[0];

    for (i = 1; i < 10; i++) {
        if (marks[i] > max) {
            max = marks[i];
        }
        if (marks[i] < min) {
            min = marks[i];
        }
    }

    printf("Maximum score: %d\n", max);
    printf("Minimum score: %d\n", min);

    return 0;
}