#include <stdio.h>

void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);

int main(void) {
	int n = 0;

	printf("Magic square of specified size.\n");

	while (n % 2 != 1) {
		printf("Enter odd number between 1 and 99: ");
		scanf("%2d", &n);
	}

	char magic_square[n][n];
	create_magic_square(n, magic_square);
	print_magic_square(n, magic_square);

	return 0;
}


void create_magic_square(int n, char magic_square[n][n]) {
	short i, r, c, prevr, prevc;
	for (r = 0; r < n; r++)
		for (c = 0; c < n; c++)
			magic_square[r][c] = 0;

//	Put 1 into first row, middle column
	r = prevr = 0;
	c = prevc = n / 2;
	i = 1;
	do {
//		Wrap over row
		if (r == -1)
			r = n - 1;
//		Wrap over column
		if (c == n)
			c = 0;
//		If element already occupied, put new right below previous placed
		if (magic_square[r][c] != 0) {
			r = prevr + 1;
			c = prevc;
		}
		prevr = r;
		prevc = c;
//		Move one row up and to to the next column
		magic_square[r--][c++] = i++;
	} while (i <= (n * n));
}


void print_magic_square(int n, char magic_square[n][n]) {
	short r, c;
	for (r = 0; r < n; r++) {
		for (c = 0; c < n; c++) {
			printf("%4hd", magic_square[r][c]);
		}
		printf("\n");
	}
}
