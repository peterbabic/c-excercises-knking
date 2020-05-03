/*
 * pr_10.c
 *
 *  Created on: Jun 11, 2013
 *      Author: delmadord
 */

// NOT WORKING - STRANGE BUG

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define NAME_LENGHT 40

void reverse_name(char *name);
int read_line(char str[], int n);

int main(void) {
	char name[NAME_LENGHT + 1];

	printf("Enter a first and last name: ");
	read_line(name, NAME_LENGHT);
	reverse_name(name);
	printf("Reversed name: %s", name);

	return 0;
}

void reverse_name(char *name) {
	char first;
	// Find where name starts and point there
	do
		first = *name++;
	while (*name == ' ');
	// Find where name ends, surname starts
	while (isalpha(*name))
		name++;
	while (*name == ' ')
		name++;
	// Copy from start of the last name to the end into temp var
	char temp[NAME_LENGHT + 1] = "";
	strcpy(temp, name);
	// Find where surname ends and cuts everything after
//	while (isalpha(*temp))
//		temp++;
//	*temp = '\0';
	// Add the rest
	strcat(temp, " , ");
	strncat(temp, &first, 1);
	strcat(temp, ".");
	// Put it to to the original var
	// BUG HERE - temp is good, copy to name is good but when
	// returned to main function, name cotains first name too
	strcpy(name, temp);
}

int read_line(char str[], int n) {
	int ch, i = 0;

	while ((ch = getchar()) != '\n')
		if (i < n)
			str[i++] = ch;
	str[i] = '\0';
	return i;
}
