/*
 * pr_16.c
 *
 *  Created on: Jun 12, 2013
 *      Author: delmadord
 */

#include <stdio.h>

#define N 100

void reverse(char *message);
int read_line(char str[], int n);

int main(void) {
	char sentence[N + 1];
	printf("Enter a message: ");
	read_line(sentence, N);
	reverse(sentence);
	printf("Reversal is: %s", sentence);

	return 0;
}

void reverse(char *message) {
	char temp, *p = message;
	// Point to the last character
	while (*(p + 1))
		p++;
	// Stop when pointers meet
	while (message < p) {
		// Exchange characters and move them towards
		temp = *p;
		*p-- = *message;
		*message++ = temp;
	}
}

int read_line(char str[], int n) {
	int ch, i = 0;

	while ((ch = getchar()) != '\n')
		if (i < n)
			str[i++] = ch;
	str[i] = '\0';
	return i;
}
