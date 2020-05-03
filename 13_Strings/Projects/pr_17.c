/*
 * pr_17.c
 *
 *  Created on: Jun 12, 2013
 *      Author: delmadord
 */


#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define N 100

bool is_palindrome(const char *message);
int read_line(char str[], int n);

int main(void) {
	char sentence[N + 1];
	printf("Enter a message: ");
	read_line(sentence, N);

	if (is_palindrome(sentence))
		printf("Palinrome");
	else
		printf("Not a palindrome");

	return 0;
}

bool is_palindrome(const char *message) {
	char *p = message;
	bool palindrome = true;
	// Point to the last character
	while (*(p + 1))
		p++;
	// Stop when the pointers meet or there is a mismatch
	while (message < p && palindrome) {
		// Skip non-aplha characters
		while (!isalpha(*message))
			message++;
		while (!isalpha(*p))
			p--;
		// Move pointers towards, match is recorded
		palindrome = (tolower(*message++) == tolower(*p--));
	}
	return palindrome;
}

int read_line(char str[], int n) {
	int ch, i = 0;

	while ((ch = getchar()) != '\n')
		if (i < n)
			str[i++] = ch;
	str[i] = '\0';
	return i;
}
