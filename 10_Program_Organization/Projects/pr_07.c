#include <stdio.h>
#include <ctype.h>

#define MAX_DIGITS 10


char digits[3][MAX_DIGITS * 4];

const int segments[10][7] = {
		{1, 1, 1, 1, 1, 1, 0},			// 0
		{0, 1, 1, 0, 0, 0, 0},			// 1
		{1, 1, 0, 1, 1, 0, 1},			// 2
		{1, 1, 1, 1, 0, 0, 1},			// 3
		{0, 1, 1, 0, 0, 1, 1},			// 4
		{1, 0, 1, 1, 0, 1, 1},			// 5
		{1, 0, 1, 1, 1, 1, 1},			// 6
		{1, 1, 1, 0, 0, 0, 0},			// 7
		{1, 1, 1, 1, 1, 1, 1},			// 8
		{1, 1, 1, 1, 0, 1, 1}			// 9
};


void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(void) {
	clear_digits_array();

	int i;
	char ch;
	printf("Enter a number: ");
	for (i = 0; i < MAX_DIGITS; ) {
		ch = getchar();
		if (isdigit(ch)) {
			process_digit(ch - '0', i);
			i++;
		}
	}

	print_digits_array();

	return 0;
}

void clear_digits_array(void) {
	int r, c;
	for (r = 0; r < 3; r++)
		for (c = 0; c < MAX_DIGITS * 4; c++)
			digits[r][c] = ' ';
}

void process_digit(int digit, int position) {
	int r, c;
	for (c = position * 4; c < (position * 4 + 4); c++) {
		// In first row, everywhere but top of certain digits is a space
		r = 0;
		if (c % 4 == 1 && segments[digit][0])
			digits[r][c] = '_';

		// In second row
		r = 1;
		if ((c % 4 == 0 && segments[digit][5]) ||
			(c % 4 == 2 && segments[digit][1]))
			digits[r][c] = '|';
		else if (c % 4 == 1 && segments[digit][6])
			digits[r][c] = '_';

		// In third row
		r = 2;
		if ((c % 4 == 0 && segments[digit][4]) ||
			(c % 4 == 2 && segments[digit][2]))
			digits[r][c] = '|';
		else if (c % 4 == 1 && segments[digit][3])
			digits[r][c] = '_';

	}
}

void print_digits_array(void) {
	int r, c;
	for (r = 0; r < 3; r++) {
		for (c = 0; c < MAX_DIGITS * 4; c++)
			putchar(digits[r][c]);
		putchar('\n');
	}
}
