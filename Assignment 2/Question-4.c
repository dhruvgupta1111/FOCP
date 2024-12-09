#include <stdio.h>

int main() {
    int marks[10], i, count = 0;

    printf("Enter marks for 10 students:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &marks[i]);
    }

    for (i = 0; i < 10; i++) {
        if (marks[i] == 99) {
            printf("Student %d scored 99.\n", i + 1);
            count++;
        }
    }

    printf("Total students who scored 99: %d\n", count);

    return 0;
}