/*
 * pr_13.c
 *
 *  Created on: Jun 12, 2013
 *      Author: delmadord
 */

#include <stdio.h>

#define MESSAGE_LEN 100

void caesar_encrypt(char *message, int shift);
int read_line(char str[], int n);

// Caesar cipher
int main(void) {
	char message[MESSAGE_LEN + 1];
	int shift;

	printf("Enter message to be encrypted: ");
	read_line(message, MESSAGE_LEN);
	printf("Enter shift amount: ");
	scanf("%d", &shift);

	caesar_encrypt(message, shift);
	printf("Encrypted message: %s", message);

	return 0;
}

void caesar_encrypt(char *message, int shift) {
	while (*message) {
		if (*message >= 'A' && *message <= 'Z')
			*message = ((*message - 'A') + shift) % 26 + 'A';
		else if (*message >= 'a' && *message <= 'z')
			*message = ((*message - 'a') + shift) % 26 + 'a';
		message++;
	}
}

int read_line(char str[], int n) {
	int ch, i = 0;

	while ((ch = getchar()) != '\n')
		if (i < n)
			str[i++] = ch;
	str[i] = '\0';
	return i;
}
