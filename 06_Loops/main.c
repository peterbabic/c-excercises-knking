/* CHAPTER 6 */

#include <stdio.h>
#include <stdlib.h>

int gcd(int, int);

void sqaure(void);
void square2(void);
void sqaure3(void);
void sum(void);
void checking(void);
void ex_01(void);
void ex_02(void);
void ex_03(void);
void ex_04(void);
void ex_05(void);
void ex_06(void);
void ex_07(void);
void ex_08(void);
void ex_09(void);
void ex_10(void);
void ex_11(void);
void ex_12(void);
void ex_13(void);
void ex_14(void);
void pr_01(void);
void pr_02(void);
void pr_03(void);
void pr_04(void);
void pr_05(void);
void pr_06(void);
void pr_06(void);
void pr_07(void);
void pr_08(void);
void pr_09(void);
void pr_10(void);
void pr_11(void);
void pr_12(void);

int main(void) {
//	sqaure3();

//	sum();

//	checking();

//	ex_14();

	pr_11();

	return 0;
}

// ################################## //

// GCD, Euclid algorithm
int gcd(int n, int d) {
	int remainder;

	while (d != 0) {
		remainder = n % d;
		n = d;
		d = remainder;
	}

	return n;
}

// ################################## //


void sqaure(void) {
	int i, n;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);

	i = 1;
	while (i <= n) {
		printf("%10d%10d\n", i, i * i);
		i++;
	}
}

void sum(void) {
	int n, sum = 0;

	printf("This program prints a series of integers.\n");
	printf("Enter integers (0 to terminate): ");
	scanf("%d", &n);

	while (n != 0) {
		sum += n;
		scanf("%d", &n);
	}

	printf("The sum is: %d\n", sum);
}

// Calculates the numbers of digits in an integer
void numdigits(void) {
	int digits = 0, n;

	printf("Enter a nonnegative integer: ");
	scanf("%d", &n);

	do {
		n /= 10;
		digits++;
	} while (n > 0);


}

// Squares using for
void square2(void) {
	int i, n;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		printf("%10d%10d\n", i, i * i);
	}
}

// Squares using odd method
void sqaure3(void) {
	int i, n, odd, square;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);

	i = 1;
	odd = 3;
	for (square = 1; i <= n; odd += 2) {
		printf("%10d%10d\n", i, square);
		++i;
		square += odd;
	}
}

// Balances a checkbook
void checking(void) {
	int cmd;
	float balance = 0.0f, credit, debit;

	printf("*** ACME checkbook-balancing program ***\n");
	printf("Commands: 0=clear, 1=credit, 2=debit ");
	printf("3=balance, 4=exit\n\n");

	for(;;) {
		printf("Enter command: ");
		scanf("%d", &cmd);
		switch (cmd) {
		case 0:
			balance = 0.0f;
			break;
		case 1:
			printf("Enter amount of credit: ");
			scanf("%f", &credit);
			balance += credit;
			break;
		case 2:
			printf("Enter amount of debit: ");
			scanf("%f", &debit);
			balance -= debit;
			break;
		case 3:
			printf("Current balance: $%.f\n", balance);
			break;
		case 4:
			return;
		default:
			printf("Commands: 0=clear, 1=credit, 2=debit ");
			printf("3=balance, 4=exit\n\n");
			break;
		}
	}
}

// EXERCISES
void ex_01(void) {
	int i = 1;
	while (i <= 128) {
		printf("%d ", i);
		i *= 2;
	}
	printf("\n\n\n");
}

void ex_02(void) {
	int i = 9384;
	do {
		printf("%d ", i);
		i /= 10;
	} while (i > 0);
	printf("\n\n\n");
}

void ex_03(void) {
	int i, j;
	for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
		printf("%d ", i);
	printf("\n\n\n");
}

void ex_04(void) {

	int i;

	for (i = 0; i < 10; i++)
		printf("%d ", i);
	printf("\n");

	for (i = 0; i < 10; ++i)
		printf("%d ", i);
	printf("\n");

	for (i = 0; i++ < 10;) // THIS IS DIFFERENT
		printf("%d ", i);
	printf("\n");

	printf("\n\n\n");
}

void ex_05(void) {
	// THIRD is not EQ
}

void ex_06(void) {
	int i;

	for (i = 1; i <= 128; i *= 2)
		printf("%d ", i);

	printf("\n\n\n");
}

void ex_07(void) {
	int i;

	for (i = 9384; i > 0; i /= 10)
		printf("%d ", i);

	printf("\n\n\n");
}

void ex_08(void) {
	int i;

	for (i = 10; i >= 1; i /= 2)
		printf("%d ", i++);
}

void ex_09(void) {
	int i = 10;

	while (i >= 1) {
		printf("%d ", i++);
		i /= 2;
	}
}

void ex_10(void) {
	while (1) {
//		…
		continue;
//		…
	}

//	The equivalent code using goto would have the following appearance:

	while (1) {
//		…
		goto loop_end;
//		…
		loop_end: ;   /* null statement */
	}
}

void ex_11(void) {
	int i, sum = 0;

	for (i = 0; i < 10; i++) {
		if (i % 2)
			continue;
		sum += i;
	}
	printf("%d\n", sum);
}

void ex_12(void) {
	int n, d;

	printf("Enter number: ");
	scanf("%d", &n);

//	for (d = 2; d < n; d++)
	for (d = 2; d * d <= n; d++)
		if (n % d == 0)
			break;

	if (d < n)
		printf("%d is divisible by %d.", n, d);
	else
		printf("%d is prime.", n);

}

void ex_13(void) {
//	for (n = 0; m > 0; m /= 2, n++);
}

void ex_14(void) {
	int n = 24;
	if (n % 2 == 0)//; no semicolon here
		printf("%d is even\n", n);
}

// PROJECTS
// Largest number in series
void pr_01(void) {
	float n, max = 0;

	do {
		printf("Enter a number: ");
		scanf("%f", &n);

		if (n > max)
			max = n;
	} while (n > 0);

	printf("\nThe largest number was: %.2f", max);
}

// GCD, Euclid algorithm
void pr_02(void) {
	int m, n, remainder;

	printf("Enter two integers: ");
	scanf("%d%d", &m, &n);

	while (n != 0) {
		remainder = m % n;
		m = n;
		n = remainder;
	}

	printf("Greatest common divisor: %d\n", m);
}

// Reduce a fraction to lowest terms
void pr_03(void) {
	int n, d, GCD;

	printf("Enter a fraction: ");
	scanf("%d / %d", &n, &d);

	GCD = gcd(n, d);
	n /= GCD;
	d /= GCD;

	printf("In lowest terms: %d/%d\n", n, d);
}

// Broker modified
void pr_04(void) {
	float commision, value;

	while (1) {
		printf("Enter value of trade: ");
		scanf("%f", &value);

		if (value <= 0)
			break;

		if (value < 2500.00f)
			commision = 30.00f + .017f * value;
		else if (value < 6250.00f)
			commision = 56.00f + .0066f * value;
		else if (value < 20000.00f)
			commision = 76.00f + .0034f * value;
		else if (value < 50000.00f)
			commision = 100.00f + .0022f * value;
		else if (value < 500000.00f)
			commision = 155.00f + .0011f * value;
		else
			commision = 255.00f + .0009f * value;

		if (commision < 39.00f)
			commision = 39.00f;

		printf("Commission: $%.2f\n\n", commision);
	}
}

void pr_05(void) {
    int n;

    printf("Enter number: ");
    scanf("%d", &n);
    printf("The reversal is: ");

	do {
		printf("%d", n % 10);
		n /= 10;
	} while (n > 0);
}

void pr_06(void) {
    int n, i;

    printf("Enter number: ");
    scanf("%d", &n);

	for (i = 2; i * i <= n; i += 2)
		printf("%d\n", i * i);
}

void pr_07(void) {
	int i, n, odd = 3, square = 1;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);

	for (i = 1 ; i <= n ; ++i) {
		printf ("%10d%10d\n", i, square) ;
		square += odd;
		odd += 2;
	}
}

void pr_08(void) {
	int i, n, start_day;

	printf("Enter number of days in month: ");
	scanf("%d", &n);
	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &start_day);

//	print any leading "blank dates"
	for (i = 1; i < start_day; i++)
		printf("   ");

//	now print the calendar
	for (i = 1; i <= n; i++) {
		printf("%3d", i);
		if ((start_day + i - 1) % 7 == 0)
			printf("\n");
	}
}

void pr_09(void) {
	float balance, interest, payment;
	int  n, i;

	printf("Enter amount of loan: ");
	scanf("%f", &balance);
	printf("Enter interest: ");
	scanf("%f", &interest);
	printf("Enter payment: ");
	scanf("%f", &payment);
	printf("Enter number of payments: ");
	scanf("%d", &n);

//	monthly = interest / 100 / 12;
	float monthly = interest / 1200;

	for (i = 1; i <= n; i++) {
		balance -= payment;
		balance += (balance * monthly);
		printf("\nBalance remaining after %33d. payment: $%.2f", i, balance);
	}
}

void pr_10(void) {
	int d1, m1, y1, d, m, y, daysFromBeginning1 = -1, tempDays;

	while (1) {
		printf("Enter a date (dd/mm/yy): ");
		scanf("%d/%d/%d", &d, &m, &y);

		if (d == 0 && m == 0 && y == 0)
			break;

		tempDays = d + 30 * m + 365 * y;

		if (daysFromBeginning1 > tempDays || daysFromBeginning1 == -1) {
			daysFromBeginning1 = tempDays;
			d1 = d;
			m1 = m;
			y1 = y;
		}
	}

	printf("\n%d/%d/%d is earliest date.", d1, m1, y1);
}

void pr_11(void) {
	int n, i, j, fact;
	float e = 1.0f;

	printf("Enter n: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		for (j = 1, fact = 1; j <= i; j++)
			fact *= j;
		e += 1 / (float)fact;
	}

	printf("The e after %d aproximations is %f.", n, e);
}

void pr_12(void) {
//	???
}
