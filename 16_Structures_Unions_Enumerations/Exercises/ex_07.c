/*
 * ex_07.c
 *
 *  Created on: Jun 16, 2013
 *      Author: delmadord
 */

// Fuctions for working with fractions

#include <stdio.h>

struct fraction {
	int numerator, denominator;
};

struct fraction reduce(struct fraction f);
struct fraction add(struct fraction f1, struct fraction f2);
struct fraction substract(struct fraction f1, struct fraction f2);
struct fraction multiply(struct fraction f1, struct fraction f2);
struct fraction divide(struct fraction f1, struct fraction f2);


int main() {
	struct fraction f, f1, f2;
	printf("fraction 1:  ");
	scanf("%d / %d", &f1.numerator, &f1.denominator);
	printf("fraction 2:  ");
	scanf("%d / %d", &f2.numerator, &f2.denominator);

	f = add(f1, f2);
	printf("added:       %d/%d\n", f.numerator, f.denominator);
	f = substract(f1, f2);
	printf("substracted: %d/%d\n", f.numerator, f.denominator);
	f = multiply(f1, f2);
	printf("multiplied:  %d/%d\n", f.numerator, f.denominator);
	f = divide(f1, f2);
	printf("divided:     %d/%d\n", f.numerator, f.denominator);

	return 0;
}

struct fraction reduce(struct fraction f) {
	int remainder;
	struct fraction g = f;

	while (g.denominator != 0) {
		remainder = g.numerator % g.denominator;
		g.numerator = g.denominator;
		g.denominator = remainder;
	}
	// g.numerator is the GCD of both now
	f.numerator /= g.numerator;
	f.denominator /= g.numerator;

	return f;
}

struct fraction add(struct fraction f1, struct fraction f2) {
	struct fraction f;
	f.numerator = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
	f.denominator = f1.denominator * f2.denominator;

	return reduce(f);
}

struct fraction substract(struct fraction f1, struct fraction f2) {
	struct fraction f;
	f.numerator = f1.numerator * f2.denominator - f2.numerator * f1.denominator;
	f.denominator = f1.denominator * f2.denominator;

	return reduce(f);
}

struct fraction multiply(struct fraction f1, struct fraction f2) {
	struct fraction f;
	f.numerator = f1.numerator * f2.numerator;
	f.denominator = f1.denominator * f2.denominator;

	return reduce(f);
}

struct fraction divide(struct fraction f1, struct fraction f2) {
	struct fraction f;
	f.numerator = f1.numerator * f2.denominator;
	f.denominator = f1.denominator * f2.numerator;

	return reduce(f);
}
