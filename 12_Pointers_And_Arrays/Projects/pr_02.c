/*
 * pr_02.c
 *
 *  Created on: Jun 9, 2013
 *      Author: delmadord
 */

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define N 100

int main(void) {
	char ch, sentence[N], *p = sentence, *q;
	printf("Enter a message: ");
	while ((ch = getchar()) != '\n' && p < sentence + N) {
		if (isalpha(ch))
		*p++ = tolower(ch);
	}

	bool palindrome = true;
	for (p--, q = sentence; p >= sentence && palindrome; p--, q++)
		palindrome = *p == *q;

	if (palindrome)
		printf("Palinrome");
	else
		printf("Not a palindrome");

	return 0;
}

