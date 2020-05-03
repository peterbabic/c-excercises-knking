/* CHAPTER 4 */

#include <stdio.h>

void upc(void);

void ex_01(void);
void ex_02(void);
void ex_09(void);
void ex_10(void);
void ex_11(void);
void ex_12(void);
void ex_13(void);
void ex_14(void);
void ex_15(void);

void pr_02(void);
void pr_03(void);
void pr_04(void);
void pr_05(void);
void pr_06(void);

int main(void) {
//	upc();

//	ex_12();

	pr_06();

	return 0;
}

/* Computes a universal product code check digit */
void upc(void) {
	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
		first_sum, second_sum, total;

	printf("Enter the first (single) digit: ");
	scanf("%1d", &d);
	printf("Enter first group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
	printf("Enter second group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

	first_sum = d + i2 + i4 + j1 + j3 + j5;
	second_sum = i1 + i3 + i5 + j2 + j4;
	total = 3 * first_sum + second_sum;

	printf("Check digit: %d\n", 9 - ((total - 1) % 10));
}

/* EXERCISES */
void ex_01(void) {
	int i, j, k;

	i = 5; j = 3;
	printf("%d %d\n", i / j, i % j);
	i = 2; j = 3;
	printf("%d\n", (i + 10) % j);
	i = 7; j = 8; k = 9;
	printf("%d\n", (i + 10) % k / j);
	i = 1; j = 2; k = 3;
	printf("%d\n", (i + 5) % (j + 2) / k);
}

void ex_02(void) {
	int i = 9, j = 1;

	printf("%d\n", (-i) / j);
	printf("%d\n", -(i / j));
}

void ex_09(void) {
	int i, j, k;

	i = 7; j = 8;
	i *= j + 1;
	printf("%d %d\n", i, j);

	i = j = k = 1;
	i += j += k;
	printf("%d %d %d\n", i, j, k);

	i = 1; j = 2; k = 3;
	i -= j -= k;
	printf("%d %d %d\n", i, j, k);

	i = 2; j = 1; k = 0;
	i *= j *= k;
	printf("%d %d %d\n", i, j, k);

}

void ex_10(void) {
	int i, j;

	i = 6;
	j = i += i;
	printf("%d %d\n", i, j);

	i = 5;
	j = (i -= 2) + 1;
	printf("%d %d\n", i, j);

	i = 7;
	j = 6 + (i = 2.5);
	printf("%d %d\n", i, j);

	i = 2; j = 8;
	j = (i = 6) + (j = 3);
	printf("%d %d\n", i, j);
}

void ex_11(void) {
	int i, j, k;

	i = 1;
	printf("%d ", i++ - 1);
	printf("%d\n", i);

	i = 10; j = 5;
	printf("%d ", i++ - ++j);
	printf("%d %d\n", i, j);

	i = 7; j = 8;
	printf("%d ", i++ - --j);
	printf("%d %d\n", i, j);

	i = 3; j = 4; k = 5;
	printf("%d ", i++ - j++ + --k);
	printf("%d %d %d\n", i, j, k);

}

void ex_12(void) {
	int i, j;

	i = 5;
	j = ++i * 3 - 2;
	printf("%d %d\n", i, j);

	i = 5;
	j = 3 - 2 * i++;
	printf("%d %d\n", i, j);

	i = 7;
	j = 3 * i-- + 2;
	printf("%d %d\n", i, j);

	i = 7;
	j = 3 + --i * 2;
	printf("%d %d\n", i, j);
}

void ex_13(void) {
	// ++i == (i += 1)
}

void ex_14(void) {
//	(a * b) - (c * d) + e
//	((a / b) % c) / d
//	(((- a) - b) + c) - (+d)
//	((a * (- b)) / c) - d
}

void ex_15(void) {
//= 1, 2
//a	3, 2
//b	0, 2
//c	1, 2
//d	1, 3
}

/* PROJECTS */
void pr_01(void) {
    int n;

    printf("Enter two-digit number: ");
    scanf("%d", &n);

    printf("The reversal is: %d%d\n",
    		(n % 10), (n / 10));
}

// Reverse
void pr_02(void) {
    int n;

    printf("Enter three-digit n: ");
    scanf("%d", &n);

    printf("The reversal is: %d%d%d\n",
    		(n % 10), (n / 10) % 10, n / 100);
}

// Reverse
void pr_03(void) {
    int hundreds, tens, ones;

    printf("Enter three-digit number: ");
    scanf("%1d%1d%1d", &hundreds, &tens, &ones);
    printf("The reversal is: %d%d%d\n", ones, tens, hundreds);
}

// Octal
void pr_04(void) {
	int n;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &n);
    printf("In octal, your number is: %d%d%d%d%d",
    		(n / 4096 % 8), (n / 512 % 8),
    		(n / 64 % 8), (n / 8 % 8), (n % 8));

}

// UPC rewritten
void pr_05(void) {
	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
		first_sum, second_sum, total;

	printf("Enter the first 11 digits of UPC:  ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
			&d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5);

	first_sum = d + i2 + i4 + j1 + j3 + j5;
	second_sum = i1 + i3 + i5 + j2 + j4;
	total = 3 * first_sum + second_sum;

	printf("Check digit: %d\n", 9 - ((total - 1) % 10));
}

// EAN
void pr_06(void) {
	int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12,
		first_sum, second_sum, total;

	printf("Enter the first 12 digits of EAN: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
			&i1, &i2, &i3, &i4, &i5, &i6,
			&i7, &i8, &i9, &i10, &i11, &i12);

	first_sum = i2 + i4 + i6 + i8 + i10 + i12;
	second_sum = i1 + i3 + i5 + i7 + i9 + i11;
	total = 3 * first_sum + second_sum;

	printf("Check digit: %d\n", 9 - ((total - 1) % 10));
}
