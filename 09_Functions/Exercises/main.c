#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>


double triangle_area(double base, double height);
int check(int x, int y, int n);
int gcd(int m, int n);
int day_of_year(int month, int day, int year);
int digit(int n, int k);
int f(int a, int b);
int largest(int a[], int n);
int average(int a[], int n);
int num_positive(int a[], int n);
float compute_GPA(char grades[], int n);
double inner_product(double a[], double b[], int n);
int evaluate_position(char board[8][8]);
bool has_zero(int a[], int n);
double median(double x, double y, double z);
int fact(int n);
int gcd_recursive(int m, int n);
void pb (int n);


int main(void) {
//	char chess_board[8][8] = {
//			{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
//			{'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
//			{' ', '.', ' ', '.', ' ', '.', ' ', '.'},
//			{'.', ' ', '.', ' ', '.', ' ', '.', ' '},
//			{' ', '.', ' ', '.', ' ', '.', ' ', '.'},
//			{'.', ' ', '.', ' ', '.', ' ', '.', ' '},
//			{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
//			{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
//	};
//	printf("%d", evaluate_position(chess_board));

	pb(3);

	return 0;
}

double triangle_area(double base, double height) {
	return base * height / 2;
}

int check(int x, int y, int n) {
  return (x >= 0 && x <= n - 1 && y >= 0 && y <= n - 1);
}

int gcd(int m, int n) {
	int remainder;

	while (n != 0) {
		remainder = m % n;
		m = n;
		n = remainder;
	}

	return m;
}

int day_of_year(int month, int day, int year) {
	int num_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int day_count = 0, i;

	for (i = 1; i < month; i++)
		day_count += num_days[i-1];

//	adjust for leap years, assuming they are divisible by 4
	if (year % 4 == 0 && month > 2)
		day_count++;

	return day_count + day;
}

int num_digits(int n) {
	int i = 0;
	while (n > 0) {
		n /= 10;
		i++;
	}
	return i;
}

int digit(int n, int k) {
	int i;
	for (i = 1; i < k; i++)
		n /= 10;
	return n % 10;
}

int f(int a, int b) {
//	a, b, e are legal I think
	return 0;
}

int largest(int a[], int n) {
	int i, max = a[0];

	for (i = 1; i < n; i++)
		if (a[i] > max)
			max = a[i];

	return max;
}

int average(int a[], int n) {
	int i, avg = 0;

	for (i = 0; i < n; i++)
		avg += a[i];

	return avg / n;
}

int num_positive(int a[], int n) {
	int i, count = 0;

	for (i = 0; i < n; i++)
		if (a[i] > 0)
			count++;

	return count;
}

float compute_GPA(char grades[], int n) {
	float avg = 0;
	int i;

	for (i = 0; i < n; i++) {
		switch (toupper(grades[i])) {
			case 'A':
				avg += 4;
				break;
			case 'B':
				avg += 3;
				break;
			case 'C':
				avg += 2;
				break;
			case 'D':
				avg += 1;
				break;
		}
	}
	return avg;
}

double inner_product(double a[], double b[], int n) {
	double product = 0;
	int i;
	for (i = 0; i < n; i++)
		product += a[i] * b[i];
	return product;
}

int evaluate_position(char board[8][8]) {
	int i, j, black = 0, white = 0;

	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) {
			switch (board[i][j]) {
				case 'Q':
					white += 9;
					break;
				case 'R':
					white += 5;
					break;
				case 'B': case 'N':
					white += 3;
					break;
				case 'P':
					white += 1;
					break;
				case 'q':
					black += 9;
					break;
				case 'r':
					black += 5;
					break;
				case 'b': case 'n':
					black += 3;
					break;
				case 'p':
					black += 1;
					break;
			}
		}
	}
	return white - black;
}

bool has_zero(int a[], int n) {
	int i;
	bool flag = false;

	for (i = 0; i < n; i++)
		flag = (a[i] == 0);
	return flag;
}

double median(double x, double y, double z) {
	double result;

	if (x <= y)
		if (y <= z) result = y;
		else if (x <= z) result = z;
		else result = x;
	else {
		if (z <= y) result = y;
		else if (x <= z) result = x;
		else result = z;
	}

	return result;
}

int fact(int n) {
  int i, result = 1;

  for (i = 2; i <= n; i++)
    result *= i;

  return result;
}

int gcd_recursive(int m, int n) {
	if (n == 0)
		return m;
	else
		return gcd_recursive(n, m % n);
}

// DEC to BINARY
void pb(int n) {
	if (n != 0) {
		pb(n / 2);
		putchar('0' + n % 2);
	}
}
