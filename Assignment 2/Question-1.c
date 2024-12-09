#include <stdio.h>

int main() {
    int marks[5], i;

    printf("Enter marks for 5 students:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
    }

    for (i = 0; i < 5; i++) {
        marks[i] += 5;
    }

    printf("Updated marks:\n");
    for (i = 0; i < 5; i++) {
        printf("%d\n", marks[i]);
    }

    return 0;
}
