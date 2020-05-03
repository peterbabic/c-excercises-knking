/*
 * pr_18.c
 *
 *  Created on: Jun 12, 2013
 *      Author: delmadord
 */

#include <stdio.h>

int main(void) {
	char *months[] = {"January", "February", "March", "April", "May",
			"June", "July", "August", "September", "October",
			"November", "December"};
	int mm, dd, yyyy;

	printf("Enter a date (dd/mm/yyyy): ");
	scanf("%2d/%2d/%d", &dd, &mm, &yyyy);
	printf("You entered the date %s %d, %d", months[mm - 1], dd, yyyy);

}
