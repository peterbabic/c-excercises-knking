/*
 * pr_12.c
 *
 *  Created on: Jun 12, 2013
 *      Author: delmadord
 */
#include <stdio.h>
//#include <>

#define NUM_WORDS 30
#define WORD_LEN 20


// Reverse words in sentence
int main(void) {
	int i = 0, j = 0;
	char ch, sentence[NUM_WORDS][WORD_LEN + 1];
	printf("Enter a sentence without pucntation: ");
	while ((ch = getchar()) != '\n') {
		if (ch == ' ') {
			sentence[i++][j] = '\0';
			j = 0;
		}
		else
			sentence[i][j++] = ch;
	}
	// Add null character in case of just one word.
	sentence[i][j] = '\0';

	printf("Reversal of sentence: ");
	while (i >= 0)
		printf("%s ", sentence[i--]);

	return 0;

}


