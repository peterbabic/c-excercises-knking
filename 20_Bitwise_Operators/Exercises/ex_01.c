/*
 * ex_01.c
 *
 *  Created on: Jun 28, 2013
 *      Author: delmadord
 */

#include <stdio.h>

int main(void) {
	unsigned short i, j, k;

	i = 8; j = 9;
	printf("%d\n", i >> (1 + j) >> 1); 		// 0

	i = 1;
	printf("%d\n", i & ~i);					// 0

	i = 2; j = 1; k = 0;
	printf("%d\n", (~i & j) ^ k);			// 1

	i = 7; j = 8; k = 9;
	printf("%d\n", i ^ (j & k));			// 15



	return 0;
}
