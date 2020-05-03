/*
 * ex_16.c
 *
 *  Created on: Jun 20, 2013
 *      Author: delmadord
 */
#include <stdio.h>


int sum(int (*f)(int), int start, int end);
int square(int x);

int main(void) {
	int s, e;
	scanf("%d %d", &s, &e);
	printf("%d", sum(square, s, e));

	return 0;
}

int sum(int (*f)(int), int start, int end) {
	int sum = 0;
	while (start <= end)
		sum += (*f)(start++);
	return sum;
}

int square(int x) {
	return x * x;
}
