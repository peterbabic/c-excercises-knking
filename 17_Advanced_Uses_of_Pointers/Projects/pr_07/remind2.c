/*
 * remind2.c
 *
 *  Created on: Jun 17, 2013
 *      Author: delmadord
 */



// Prints a one-month reminder list

// USING VSTRING STRUCTURE BUT FUCK IT, IT IS NOT WORKING

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_REMIND 50
#define MSG_LEN 60

struct vstring {
	int len;
	char chars[];
};


int read_line(char str[], int n);

int main(void) {

	struct vstring *reminders[MAX_REMIND];
	char day_str[3], msg_str[MSG_LEN + 1];
	int day, i, j, k, n, num_remind = 0;

	while (1) {
		if (num_remind == MAX_REMIND) {
			printf("-- No space left --n");
			break;
		}

		printf("Enter day reminder: ");
		scanf("%2d", &day);
		if (day == 0)
			break;
		sprintf(day_str, "%2d", day);
		read_line(msg_str, MSG_LEN);

		for (i = 0; i < num_remind; i++)
			if (strcmp(day_str, reminders[i]->chars) < 0)
				break;
		for (j = num_remind; j > i; j--)
			reminders[j] = reminders[j - i];

		n = strlen(msg_str);
		reminders[i] = malloc(sizeof(struct vstring) + n);
		if (reminders[i] == NULL) {
			printf("-- No space left --\n");
			break;
		}
		reminders[i]->len = n;

		strcpy(reminders[i]->chars, day_str);
		strcat(reminders[i]->chars, msg_str);

		num_remind++;
	}

	printf("\nDay Reminder\n");
	for (i = 0; i < num_remind; i++) {
		putchar(' ');
		for (k = 0; k < reminders[i]->len; k++)
			putchar(reminders[i]->chars);
		putchar('\n');
	}

//		printf(" %s\n", reminders[i]->chars);

	return 0;
}

int read_line(char str[], int n) {
	int ch, i = 0;

	while ((ch = getchar()) != '\n')
		if (i < n)
			str[i++] = ch;
	str[i] = '\0';
	return i;
}
