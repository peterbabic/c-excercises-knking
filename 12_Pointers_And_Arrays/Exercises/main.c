/*
 * main.c
 *
 *  Created on: Jun 9, 2013
 *      Author: delmadord
 */

#include <stdbool.h>
#include <stdio.h>

#define N 10

void ex_02(void);
// ex_04 is in ptr_stack.c
// ex_06
int sum_array(const int a[], int n);
// ex_07
bool search(const int a[], int n, int key);
// ex_08
void store_zeros(int a[], int n);
// identical matrix in pointer arithmetic
void ex_13(void);


int main(void) {


	return 0;
}

void ex_02(void) {
	int high, middle, low;
	middle = low + (high - low) / 2;
}

int sum_array(const int a[], int n) {
  int *p, sum;

  sum = 0;
  for (p = a; p < a + n; p++)
    sum += *p;
  return sum;
}

bool search(const int a[], int n, int key) {
	int *p;
	bool found = false;

	for (p = a; p < a + n; p++)
		if (*p == key)
			found = true;

	return found;
}

void store_zeros(int a[], int n) {
	int *p;
	for (p = a; p < a + n; p++)
		*p = 0;
}

void ex_13(void) {
	double ident[N][N], *p;
	int num_zeros = N;

	for (p = &ident[0][0]; p <= &ident[N - 1][N - 1]; p++)
		if (num_zeros == N) {
			*p = 1.0;
			num_zeros = 0;
		}
		else {
			*p = 0.0;
			num_zeros++;
		}
}
