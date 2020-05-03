/* CHAPTER 3 */

#include <stdio.h>

void tprintf(void);

void ex_01(void);
void ex_02(void);
void ex_04(void);
void ex_05(void);

void pr_01(void);
void pr_02(void);
void pr_03(void);
void pr_04(void);
void pr_05(void);
void pr_06(void);

int main(void) {
//	tprintf();
//	addfrac();

//	ex_06();

	pr_06();

	return 0;
}

/* Ilustrates the use of printf */
void tprintf(void) {
	int i;
	float x;

	i = 40;
	x = 839.21f;

	printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
	printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);
}

/* Adds two fractions */
void addfrac(void) {
	int num1, denom1, num2, denom2, result_num, result_denom;

	printf("Enter first fraction: ");
	scanf("%d / %d", &num1, &denom1);

	printf("Enter second fraction: ");
	scanf("%d / %d", &num2, &denom2);

	result_num = num1 * denom2 + num2 * denom1;
	result_denom = denom1 * denom2;

	printf("The sum is %d/%d\n", result_num, result_denom);

}

/* EXERCISES */
void ex_01(void) {
	printf("%6d,%4d\n", 86, 1040);
	printf("%12.5e\n", 30.253);
	printf("%.4f\n", 83.162);
	printf("%-6.2g\n", .0000009979);
}

void ex_02(void) {

//	a) %-8.1e
//	b) %10.6e
//	c) %-8.3f
//	d) %6.0f
}

void ex_04(void) {
//	Enter 10.3 5 6
	int i, j;
	float x;

	scanf("%d%f%d", &i, &x, &j);
	printf("i = %d, x = %.1f, j = %d", i, x, j);
}

void ex_05(void) {
	//	Enter 12.3 45.6 789
	int i;
	float x, y;

	scanf("%f%d%f", &x, &i, &y);
	printf("x = %f, i = %d, y = %f", x, i, y);
}

/* PROJECTS */
void pr_01(void) {
	int dd, mm, yyyy;

	printf("Enter a date (dd/mm/yyyy): ");
	scanf("%d/%d/%d", &dd, &mm, &yyyy);
	printf("You entered date: %.4d%.2d%.2d", yyyy, mm, dd);
}

void pr_02(void) {
	int number, dd, mm, yyyy;
	float price;

	printf("Enter item number: ");
	scanf("%d", &number);
	printf("Enter item price: ");
	scanf("%f", &price);
	printf("Enter purchase date (dd, mm, yyyy): ");
	scanf("%d/%d/%d", &dd, &mm, &yyyy);

	printf("\nItem\t\tUnit\t\tPurchase\n");
	printf(" \t\tPrice\t\tDate\n");
	printf("%d\t\t$  %.2f\t%.2d/%.2d/%.4d\n",
			number, price, dd, mm, yyyy);
}

void pr_03(void) {
	int prefix, groupID, publisher, number, check;

	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &prefix, &groupID,
			&publisher, &number, &check);

	printf("GS1 prefix: %d\n", prefix);
	printf("Group identifier: %d\n", groupID);
	printf("Publisher code: %d\n", publisher);
	printf("Item number: %d\n", number);
	printf("Check digit: %d\n", check);
}

void pr_04(void) {
	int a, b, c;

	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf("(%d) %d-%d", &a, &b, &c);
	printf("You entered: %d.%d.%d", a, b, c);
}

void pr_05(void) {
	int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15, i16;

	// Enter 16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1 for Magic Square
	printf("Enter numbers from 1 to 16 in any order:\n");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
			&i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11, &i12, &i13, &i14, &i15, &i16);
	printf("\n");
	printf("%6d %2d %2d %2d |%2d\n", i1, i2, i3, i4, (i1 + i2 + i3 + i4));
	printf("%6d %2d %2d %2d |%2d\n", i5, i6, i7, i8, (i5 + i6 + i7 + i8));
	printf("%6d %2d %2d %2d |%2d\n", i9, i10, i11, i12, (i9 + i10 + i11 + i12));
	printf("%6d %2d %2d %2d |%2d\n", i13, i14, i15, i16, (i13 + i14 + i15 + i16));
	printf("--------------- | --\n");
	printf("%2d |%2d %2d %2d %2d |%2d\n", (i4 + i7 + i10 + i13), (i1 + i5 + i9 + i13), (i2 + i6 + i10 + i14),
			(i3 + i7 + i11 + i15), (i4 + i8 + i12 + i16), (i1 + i6 + i11 + i16));

	printf("\n");
}

void pr_06(void) {
	int num1, denom1, num2, denom2, result_num, result_denom;

	printf("Enter two fractions separated by a plus sign: ");
	scanf("%d / %d + %d / %d", &num1, &denom1, &num2, &denom2);


	result_num = num1 * denom2 + num2 * denom1;
	result_denom = denom1 * denom2;

	printf("The sum is %d/%d\n", result_num, result_denom);
}
