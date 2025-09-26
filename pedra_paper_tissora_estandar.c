#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int player_choice;
    int computer_choice;
    char choices[][20] = {"Rock", "Paper", "Scissors"};

    // Seed the random number generator
    srand(time(NULL));

    // Get the computer's choice (0 for Rock, 1 for Paper, 2 for Scissors)
    computer_choice = rand() % 3;

    // Get the player's choice
    printf("Welcome to Rock, Paper, Scissors!\n");
    printf("1 for Rock, 2 for Paper, 3 for Scissors.\n");
    printf("Enter your choice: ");
    scanf("%d", &player_choice);

    // Adjust player's choice to be 0-indexed
    player_choice = player_choice - 1;

    // Display choices
    printf("\nYou chose: %s\n", choices[player_choice]);
    printf("Computer chose: %s\n", choices[computer_choice]);

    // Determine the winner
    if (player_choice == computer_choice) {
        printf("It's a tie!\n");
    } else if ((player_choice == 0 && computer_choice == 2) || // Rock beats Scissors
               (player_choice == 1 && computer_choice == 0) || // Paper beats Rock
               (player_choice == 2 && computer_choice == 1)) { // Scissors beats Paper
        printf("You win!\n");
    } else {
        printf("You lose!\n");
    }

    return 0;
}
