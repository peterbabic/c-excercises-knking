/*
 * pr_14.c
 *
 *  Created on: Jun 12, 2013
 *      Author: delmadord
 */
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define WORD_LENGHT 20

bool are_anagrams(const char *word1, const char *word2);

// Anagrams
int main(void) {
	char w1[WORD_LENGHT + 1], w2[WORD_LENGHT + 1];
	printf("Enter first word: ");
	scanf("%s", w1);

	printf("Enter second word: ");
	scanf("%s", w2);

	if (are_anagrams(w1, w2))
		printf("The words are anagrams.");
	else
		printf("The words are not anagrams.");

	return 0;
}

bool are_anagrams(const char *word1, const char *word2) {
	int i;
	char contain[26] = {0};

	while (*word1) {
		if (isalpha(*word1))
			contain[toupper(*word1) - 'A']++;
		word1++;
	}
	while (*word2) {
		if (isalpha(*word2))
			contain[toupper(*word2) - 'A']--;
		word2++;
	}

	for (i = 0; i < 26; i++) {
		if (contain[i] != 0)
			break;
	}

	return (i == 26);
}
