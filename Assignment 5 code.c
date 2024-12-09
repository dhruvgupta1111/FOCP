#include <stdio.h>
#include <string.h>

int main() {
    char word[] = "HANGMAN";
    char guess;
    int lives = 3, correctGuesses = 0;
    int wordLength = strlen(word);
    char guessedLetters[wordLength];

    for (int i = 0; i < wordLength; i++) {
        guessedLetters[i] = '_';
    }

    for (; lives > 0 && correctGuesses < wordLength;) {
        printf("Word: ");
        for (int i = 0; i < wordLength; i++) {
            printf("%c ", guessedLetters[i]);
        }
        printf("\nLives remaining: %d\n", lives);
        printf("Guess a letter: ");
        scanf(" %c", &guess);

        int found = 0;
        for (int i = 0; i < wordLength; i++) {
            if (word[i] == guess) {
                guessedLetters[i] = guess;
                correctGuesses++;
                found = 1;
            }
        }

        if (!found) {
            lives--;
            printf("Wrong guess!\n");
        }
    }

    if (correctGuesses == wordLength) {
        printf("Congratulations! You win!\n");
    } else {
        printf("You lose! The word was: %s\n", word);
    }

    return 0;
}
