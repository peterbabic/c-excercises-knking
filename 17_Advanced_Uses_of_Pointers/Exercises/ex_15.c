/*
 * ex_15.c
 *
 *  Created on: Jun 19, 2013
 *      Author: delmadord
 */

//Answer: 3
//The program tests the values of f2(0), f2(1), f2(2), and so on,
//stopping when f2 returns zero. It then prints the argument that
//was passed to f2 to make it return zero.

#include <stdio.h>

int f1(int (*f)(int));
int f2(int i);

int main(void) {
	printf("Answer: %d\n", f1(f2));

	return 0;
}

int f1(int (*f)(int)) {
	int n = 0;
	while ((*f)(n))
		n++;

	return n;
}

int f2(int i) {
	return i * i + i - 12;
}
