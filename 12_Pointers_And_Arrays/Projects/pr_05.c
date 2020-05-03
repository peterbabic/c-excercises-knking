/*
 * pr_05.c
 *
 *  Created on: Jun 10, 2013
 *      Author: delmadord
 */

// NOT WORKING - crappy project


#include <stdio.h>

// Reverse words in sentence
int main(void) {
	char ch, sentence[50], terminating, *p = sentence, *q, *r;

	printf("Enter a sentence: ");
//	Insert words into array
	ch = getchar();
	while (ch != '.' && ch != '!' && ch != '?') {
		*p++ = ch;
		ch = getchar();
	}
//	Terminating character into separate one
	terminating = ch;

	printf("Reversal of sentence:");
//	Some fancy algorithms going back and forth over the words
	for (q = p, q--; q >= sentence; q--) {
		if (*(p - 1) != ' ' && q > sentence)
			continue;
		putchar(' ');
		for (r = q; r < p; r++) {
			putchar(*r);
		}
		r = q - 1;
	}
	putchar(terminating);

	return 0;
}
