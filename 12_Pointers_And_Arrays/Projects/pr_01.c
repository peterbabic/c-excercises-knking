/*
 * pr_01.c
 *
 *  Created on: Jun 9, 2013
 *      Author: delmadord
 */


#include <stdio.h>


#define N 100

int main(void) {
	char ch, sentence[N], *p = sentence;
	printf("Enter a message: ");
	while ((ch = getchar()) != '\n' && p < sentence + N) {
		*p++ = ch;
	}

	printf("Reversal is: ");
	for (p--; p >= sentence; p--)
		putchar(*p);

	return 0;
}
