/*
 * pr_07.c
 *
 *  Created on: Jun 11, 2013
 *      Author: delmadord
 */

#include <stdio.h>

int main(void) {
	int tens, ones;
	char *word_tens[10] = {"", "ten", "twenty", "thirty", "forty", "fifty",
			"sixty", "seventy", "eighty", "ninety"};
	char *word_ones[10] = {"", "one", "two", "three", "four", "five",
			"six", "seven", "eight", "nine"};
	char *word_special[10] = {"ten", "eleven", "twelve", "thirteen",
			"fourteen", "fifteen", "sixteen", "seventeen",
			"eighteen", "nineteen"};

	printf("Enter a two-digit number: ");
	scanf("%1d%1d", &tens, &ones);

	printf("You entered the number ");
	if (tens != 1) {
		printf("%s", word_tens[tens]);
		if (ones > 0)
			printf("-%s", word_ones[ones]);
	}
	else
		printf("%s", word_special[ones]);
	printf(".");

	return 0;
}
