/*
 * pr_06.c
 *
 *  Created on: Jun 10, 2013
 *      Author: delmadord
 */
// NOT WORKING - working with pointers rather than integers
#include <stdio.h>

#define N 10

void quicksort(int a[], int *low, int *high);
int *split(int a[], int *low, int *high);

int main(void) {
	int a[N], i, *p;

	printf("Enter %d numbers to be sorted: ", N);
	for (p = a; p < a + N; p++)
		scanf("%d", p);

	quicksort(a, a, a + N - 1);

	printf("In sorted order: ");
	for (i = 0; i < N; i++)
		printf("%d ", a[i]);
	printf("\n");

	return 0;
}

void quicksort(int a[], int *low, int *high) {
	int *middle;

	if (*low >= *high) return;
	middle = split(a, low, high);
	quicksort(a, low, middle - 1);
	quicksort(a, middle + 1, high);
}

int *split(int a[], int *low, int *high) {
	int part_element = a[low];

	while (1) {
		while (low < high && part_element <= a[high])
			high--;
		if (low >= high) break;
		a[low++] = a[high];

		while (low < high && a[low] <= part_element)
			low++;
		if (low >= high) break;
		a[high--] = a[low];
	}

	a[high] = part_element;
	return high;
}

