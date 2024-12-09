#include <stdio.h>

int main() {
    int marks[10], i;

    printf("Enter marks for 10 students:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &marks[i]);
    }

    for (i = 0; i < 10; i++) {
        if (marks[i] == 99) {
            printf("Student %d scored the first 99.\n", i + 1);
            return 0; 
        }
    }

    printf("No student scored 99.\n");

    return 0;
}
