/* Asks user to guess a hidden number */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 100

// External variable
int secret_number;

// Prototypes
void initialize_number_generator(void);
void choose_new_secret_number(void);
void read_guesses(void);

int main(void) {
	char command;
	printf("Guess the secret number between 1 and %d.\n\n", MAX_NUMBER);
	initialize_number_generator();

	do {
		choose_new_secret_number();
		printf("A new number has been choosen.\n");

		read_guesses();
		printf("Play again? (Y/N) ");

		scanf(" %c", &command);
		printf("\n");
	} while (command == 'y' || command == 'Y');

	return 0;
}

void initialize_number_generator(void) {
	srand ((unsigned) time(NULL));
}

void choose_new_secret_number(void) {
	secret_number = rand() % MAX_NUMBER + 1;
}

void read_guesses(void) {
	int guess, num_guesses = 0;

	while (1) {
		num_guesses++;
		printf("Enter guess: ");
		scanf("%d", &guess);

		if (guess == secret_number) {
			printf("You won in %d guesses!\n", num_guesses);
			return;
		}
		else if (guess < secret_number)
			printf("Too low; try again.\n");
		else
			printf("Too high; try again.\n");

	}
}





















