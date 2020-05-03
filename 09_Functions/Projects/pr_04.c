/*
 * pr_04.c
 *
 *  Created on: Feb 18, 2013
 *      Author: delmadord
 */

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main(void) {
	int counts1[26] = {0}, counts2[26] = {0};

	read_word(counts1);
	read_word(counts2);


	if (equal_array(counts1, counts2))
		printf("The words are anagrams.");
	else
		printf("The words are not anagrams.");

	return 0;
}

void read_word(int counts[26]) {
	char ch;
	short i;
	printf("Enter a word: ");
	i = 0;
	while ((ch = getchar()) != '\n') {
		if (isalpha(ch))
			counts[toupper(ch) - 'A']++;
		i++;
	}
}

bool equal_array(int counts1[26], int counts2[26]) {
	short i;
	bool equals = true;
	for (i = 0; i < 26; i++) {
		if (counts1[i] != counts2[i]) {
			equals = false;
			break;
		}
	}
	return equals;
}
