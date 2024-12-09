#include <stdio.h>

int main() {
    int marks[10], i;

    printf("Enter marks for 10 students:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &marks[i]);
    }

    for (i = 0; i < 10; i++) {
        if (marks[i] % 2 == 0) {
            printf("Student %d's score %d is even.\n", i + 1, marks[i]);
        } else {
            printf("Student %d's score %d is odd.\n", i + 1, marks[i]);
        }
    }

    return 0;
}