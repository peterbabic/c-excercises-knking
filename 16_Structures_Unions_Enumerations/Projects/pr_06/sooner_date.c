/*
 * sooner_date.c
 *
 *  Created on: Jun 17, 2013
 *      Author: delmadord
 */

#include <stdio.h>

struct date {
	int day, month, year;
};

int day_of_year(struct date d);
int compare_dates(struct date d1, struct date d2);

// Which date is sooner
int main(void) {
	struct date d1, d2;

	printf("Enter first date: ");
	scanf("%d/%d/%d", &d1.day, &d1.month, &d1.year);
	printf("Enter second date: ");
	scanf("%d/%d/%d", &d2.day, &d2.month, &d2.year);

	if (compare_dates(d1, d2) < 0)
		printf("%d/%d/%d is earlier than %d/%d/%d.",
				d1.day, d1.month, d1.year, d2.day, d2.month, d2.year);
	else if (compare_dates(d1, d2) > 0)
		printf("%d/%d/%d is earlier than %d/%d/%d.",
				d2.day, d2.month, d2.year, d1.day, d1.month, d1.year);
	else
		printf("Dates are the same.");

	return 0;
}

int day_of_year(struct date d) {
	int feb = (d.year % 4 == 0) ? 29 : 28;
	int days_in_months[] = {0,
			31, feb, 31, 30, 31, 30,
			31,  31, 30, 31, 30, 31};
	int i, days = d.day;
	for (i = 1; i < d.month; i++)
		days += days_in_months[i];

	return days;
}

int compare_dates(struct date d1, struct date d2) {
	// Trasnforms date into days
	int days1 = day_of_year(d1) + d1.year * 365 + (d1.year % 4);
	int days2 = day_of_year(d2) + d2.year * 365 + (d2.year % 4);

	if (days1 < days2)
		return -1;
	else if (days1 == days2)
		return 0;
	else
		return 1;
}
