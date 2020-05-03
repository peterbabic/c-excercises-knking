/*
 * pr_11.c
 *
 *  Created on: Jun 11, 2013
 *      Author: delmadord
 */

#include <stdio.h>
#include <string.h>

#define SENTENCE_LEN 100

double compute_avg_word_lenght(const char *sentence);
int read_line(char str[], int n);
int count_spaces(const char *s);

int main(void) {
	char sentence[SENTENCE_LEN + 1];
	printf("Enter a sentence without punctuation (.,?!): ");
	read_line(sentence, SENTENCE_LEN);
	printf("Average word length: %.2f",
			compute_avg_word_lenght(sentence));

	return 0;
}

double compute_avg_word_lenght(const char *sentence) {
	double words = count_spaces(sentence);
	// Even if there is no space, it is at least one word
	return (strlen(sentence) - words) / (words + 1);
}

int read_line(char str[], int n) {
	int ch, i = 0;

	while ((ch = getchar()) != '\n')
		if (i < n)
			str[i++] = ch;
	str[i] = '\0';
	return i;
}

int count_spaces(const char *s) {
	int count = 0;

	while (*s)
		if (*s++ == ' ')
			count++;
	return count;
}
