/*
 * pr_08.c
 * Game of craps.
 *
 *  Created on: Jun 4, 2013
 *      Author: delmadord
 */

#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

int roll_dice(void);
bool play_game(void);

int main(void) {
	srand(time(NULL));

	int wins = 0, loses = 0;
	char ch = 'y';
	while (ch == 'y' || ch == 'Y') {
		if (play_game()) {
			wins++;
			printf("You win!\n");
		}
		else {
			loses++;
			printf("You lose!\n");
		}

		printf("\nPlay again? ");
		ch = getchar();

		while (getchar() != '\n');
		printf("\n");
	}

	printf("Wins: %d  Losses: %d", wins, loses);

	return 0;
}

// Generate a random number (simulation of rolling two dices)
int roll_dice(void) {
	return rand() % 6 + rand() % 6 + 2;
}


bool play_game(void) {
	int status = false, roll = roll_dice();
	printf("You rolled: %d\n", roll);

	if (roll == 7 || roll == 11)
		status = true;
	else if (roll == 2 || roll == 3)
		status = false;
	else {
		printf("Your point is %d\n", roll);
		int point = roll;
		while (roll = roll_dice()) {
			printf("You rolled: %d\n", roll);

			if (roll == point) {
				status = true;
				break;
			}
			else if (roll == 7) {
				status = false;
				break;
			}
		}
	}

	return status;
}



