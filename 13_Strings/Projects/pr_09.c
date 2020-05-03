/*
 * pr_09.c
 *
 *  Created on: Jun 11, 2013
 *      Author: delmadord
 */
#include <stdio.h>
#include <ctype.h>

#define SENTENCE_LENGHT 100

int compute_vowel_count(const char *sentence);
int read_line(char str[], int n);

int main(void) {
	char sentence[SENTENCE_LENGHT + 1];

	printf("Enter a sentence: ");
	read_line(sentence, SENTENCE_LENGHT);
	printf("Your sentence contains %d vowels.",
			compute_vowel_count(sentence));

	return 0;
}

int compute_vowel_count(const char *sentence) {
	int vowels = 0;
	char *p = sentence;
	while (*p) {
		*p = toupper(*p);
		if (*p == 'A' || *p == 'E' || *p == 'I' || *p == 'O' || *p == 'U')
			vowels++;
		p++;
	}

	return vowels;
}

int read_line(char str[], int n) {
	int ch, i = 0;

	while ((ch = getchar()) != '\n')
		if (i < n)
			str[i++] = ch;
	str[i] = '\0';
	return i;
}
