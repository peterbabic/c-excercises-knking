/*
 * pr_01.c
 *
 *  Created on: Feb 14, 2013
 *      Author: delmadord
 */

// NOT WORKING - DONT UNDERSTAND THE ASSIGMENT

#include <stdio.h>

#define N 10

void selection_sort(int n, int a[n]) {
	if (n > 1) {
		int i, temp, max = 0;
//		Find index of highest element
		for (i = 1; i < n; i++) {
			if (a[i] > max)
				max = i;
		}
//		Swap it to the end of the array
		temp = a[n];
		a[n] = a[max];
		a[max] = temp;
		selection_sort(n - 1, a);
	}
	else printf("%d ", n - 1);
}

int main(void) {
	int i, serie[N] = {0};

	printf("Enter %d integers: ", N);
	for (i = 0; i < N; i++)
		scanf("%d", &serie[i]);

	selection_sort(N, serie);

	printf("Sorted: ");
	for (i = 0; i < N; i++)
		printf("%d ", serie[i]);

	return 0;
}

