/*
 * main.c
 *
 *  Created on: Jun 9, 2013
 *      Author: delmadord
 */

#include <stdio.h>



void ex_01(void);
void ex_02(void);
// ex_03
void avg_sum(double a[], int n, double *avg, double *sum);
// ex_04
void swap(int *p, int *q);
// ex_05
void split_time(long total_sec, int *hr, int *min, int *sec);
// ex_06
void find_two_largest(int a[], int n, int *largest, int *slargest);
// ex_07
void split_date(int day_of_year, int year, int *month, int *day);
void *find_largest(int a[], int n);



int main(void) {
	int a[] = {12, 1, 4, 2, 9};

	printf("%d is largest", find_largest(a, 5));

	return 0;
}



void ex_01(void) {
	// a, c, d, g, h seems ok to me
}

void ex_02(void) {
	// e, f, i are ok
}

void avg_sum(double a[], int n, double *avg, double *sum) {
	int i;

	*sum = 0.0;
	for (i = 0; i < n; i++)
		*sum += a[i];
	*avg = *sum / n;
}

void swap(int *p, int *q) {
	int temp = *p;
	*p = *q;
	*q = temp;
}

void split_time(long total_sec, int *hr, int *min, int *sec) {
	*hr = total_sec / 3600;
	total_sec %= 3600;
	*min = total_sec / 60;
	*sec = total_sec % 60;
}

void find_two_largest(int a[], int n, int *largest, int *slargest) {
	  int i;

	  if (a[0] > a[1]) {
	    *largest = a[0];
	    *slargest = a[1];
	  } else {
	    *largest = a[1];
	    *slargest = a[0];
	  }

	  for (i = 2; i < n; i++)
	    if (a[i] > *largest) {
	      *slargest = *largest;
	      *largest = a[i];
	    } else if (a[i] > *slargest)
	      *slargest = a[i];
}

void split_date(int day_of_year, int year, int *month, int *day) {
	int feb = (year % 4 == 0) ? 29 : 28;
	int days_in_months[] = {0,
			31, feb, 31, 30, 31, 30,
			31,  31, 30, 31, 30, 31};

	*day = day_of_year;
	for (*month = 1; *day > days_in_months[*month]; (*month)++) {
		*day -= days_in_months[*month];
	}
}

void *find_largest(int a[], int n) {
	int i, *largest = &a[0];
	for (i = 0; i < n; i++)
		if (a[i] > *largest)
			largest = &a[i];
	return *largest;
}

