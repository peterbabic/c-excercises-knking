/* Reverses a series of numers (pointer version)
 *
 * reverse3.c
 *
 *  Created on: Jun 9, 2013
 *      Author: delmadord
 */

#include <stdio.h>

#define N 10

int main(void) {
	int a[N], *p;

	printf("Enter %d numbers: ", N);
	for (p = a; p < a + N; p++)
		scanf("%d", p);

	printf("In reverse order: ");
	for (p = a + N - 1; p >= a; p--)
		printf(" %d", *p);
	printf("\n");

	return 0;
}
