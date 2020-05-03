/*
 * pr_03.c
 *
 *  Created on: Jun 9, 2013
 *      Author: delmadord
 */

#include <stdio.h>

int gcd(int n, int d);
void reduce(int numerator, int denominator,
		int *reduced_numerator, int *reduced_denomirator);


// Reduce a fraction to lowest terms
int main(void) {
	int n, d, rn, rd;

	printf("Enter a fraction: ");
	scanf("%d / %d", &n, &d);
	reduce(n, d, &rn, &rd);
	printf("In lowest terms: %d/%d\n", rn, rd);

	return 0;
}


void reduce(int numerator, int denominator,
		int *reduced_numerator, int *reduced_denomirator) {
	int GCD = gcd(numerator, denominator);
	*reduced_numerator = numerator / GCD;
	*reduced_denomirator = denominator / GCD;
}

// GCD, Euclid algorithm
int gcd(int n, int d) {
	int remainder;

	while (d != 0) {
		remainder = n % d;
		n = d;
		d = remainder;
	}

	return n;
}
