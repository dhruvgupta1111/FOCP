#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int playerChoice, cpuChoice;
    char options[3][10] = {"Rock", "Paper", "Scissors"};

    printf("Enter your choice (0: Rock, 1: Paper, 2: Scissors): ");
    scanf("%d", &playerChoice);

    if (playerChoice < 0 || playerChoice > 2) {
        printf("Invalid choice.\n");
        return 1;
    }

    srand(time(0));
    int randomValue = rand() % 101;
    cpuChoice = randomValue <= 33 ? 0 : (randomValue <= 66 ? 1 : 2);

    printf("You chose: %s\n", options[playerChoice]);
    printf("Computer chose: %s\n", options[cpuChoice]);

    if (playerChoice == cpuChoice)
        printf("It's a draw!\n");
    else if ((playerChoice == 0 && cpuChoice == 2) || 
             (playerChoice == 1 && cpuChoice == 0) || 
             (playerChoice == 2 && cpuChoice == 1))
        printf("You win!\n");
    else
        printf("Computer wins!\n");

    return 0;
}
