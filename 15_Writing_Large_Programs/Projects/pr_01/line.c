/*
 * line.c
 *
 *  Created on: Jun 13, 2013
 *      Author: delmadord
 */


#include <stdio.h>
#include <string.h>
#include "line.h"

#define MAX_LINE_LEN 60

char line[MAX_LINE_LEN + 1];
int line_len = 0;
int num_words = 0;

void clear_line(void) {
	line[0] = '\0';
	line_len = 0;
	num_words = 0;
}

void add_word(const char *word) {
	if (num_words > 0) {
		line[line_len] = ' ';
		line[line_len + 1] = '\0';
		line_len++;
	}
	strcat(line, word);
	line_len += strlen(word);
	num_words++;
}

int space_remainig(void) {
	return MAX_LINE_LEN - line_len;
}

void write_line(void) {
	int extra_spaces, spaces_to_insert, i, j;

	// How many spaces are between the words
	extra_spaces = MAX_LINE_LEN - line_len;
	// Go over every character of array
	for (i = 0; i < line_len; i++) {
		// Write arbitrary characters
		if (line[i] != ' ')
			putchar(line[i]);
		else {
			// Here should it be IMPROVED by alternating spaces
			// But I dont know how
			spaces_to_insert = extra_spaces / (num_words - 1);
			for (j = 1; j <= spaces_to_insert + 1; j++)
				putchar(' ');
			extra_spaces -= spaces_to_insert;
			num_words--;
		}
	}
	putchar('\n');
}

void flush_line(void) {
	if (line_len > 0)
		puts(line);
}
