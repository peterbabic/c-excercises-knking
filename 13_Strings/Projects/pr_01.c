/*
 * pr_01.c
 *
 *  Created on: Jun 11, 2013
 *      Author: delmadord
 */

#include <stdio.h>
#include <string.h>

#define WORD_LEN 20

int main(void) {
	// + 1 because of null character
	char word[WORD_LEN + 1];
	char smallest_word[WORD_LEN + 1] = "", largest_word[WORD_LEN + 1] = "";

	while (strlen(word) != 4) {
		printf("Enter word: ");
		scanf("%s", word);
		if (strlen(smallest_word) == 0 || strcmp(smallest_word, word) > 0)
			strcpy(smallest_word, word);
		else if (strlen(largest_word) == 0 || strcmp(largest_word, word) < 0)
			strcpy(largest_word, word);
	}

	printf("\nSmallest word: %s", smallest_word);
	printf("\nLargest word: %s", largest_word);

	return 0;
}

