/*
 * pr_08.c
 *
 *  Created on: Jun 11, 2013
 *      Author: delmadord
 */

#include <stdio.h>
#include <ctype.h>

#define WORD_LEN 20

int compute_scrabble_value(const char *word);

// Scrabble
int main(void) {
	char word[WORD_LEN];
	printf("Enter a word: ");
	scanf("%s", word);
	printf("Scrabble value: %d\n", compute_scrabble_value(word));

	return 0;
}

int compute_scrabble_value(const char *word) {
	int sum = 0;

	while (*word)
		switch (toupper(*word++)) {
			case 'D': case 'G':
				sum += 2; break;
			case 'B': case 'C': case 'M': case 'P':
				sum += 3; break;
			case 'F': case 'H': case 'V': case 'W': case 'Y':
				sum += 4; break;
			case 'K':
				sum += 5; break;
			case 'J': case 'X':
				sum += 8; break;
			case 'Q': case 'Z':
				sum += 10; break;
			default:
				sum++; break;
		}

	return sum;
}
