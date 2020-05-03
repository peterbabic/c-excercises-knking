/* CHAPTER 7 */

#include <stdio.h>
#include <ctype.h>
#include <math.h>

void sum2(void);
void lenght(void);
void sum2(void);
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
void ex_15(void);
void pr_01(void);
void pr_02(void);
void pr_03(void);
void pr_04(void);
void pr_05(void);
void pr_06(void);
void pr_07(void);
void pr_08(void);
void pr_09(void);
void pr_10(void);
void pr_11(void);
void pr_12(void);
void pr_13(void);
void pr_14(void);
void pr_15(void);


int main(void) {
//	lenght();

	pr_15();

	return 0;
}


// Sums series of numbers (using long variables)
void sum2(void) {
	long n, sum = 0;

	printf("This program prints a series of integers.\n");
	printf("Enter integers (0 to terminate): ");
	scanf("%ld", &n);

	while (n != 0) {
		sum += n;
		scanf("%ld", &n);
	}

	printf("The sum is: %ld\n", sum);
}

// Number of characters
void lenght(void) {
	char ch;
	int len = 0;

	printf("Enter a message: ");
	ch = getchar();
	while (ch != '\n') {
		len++;
		ch = getchar();
	}

	printf("Your message was %d characters(s) long.\n", len);
}

// Number of characters easier version
void lenght2(void) {
	int len = 0;

	printf("Enter a message: ");
	while (getchar() != '\n')
		len++;

	printf("Your message was %d characters(s) long.\n", len);
}

// EXERCISES //
void ex_01(void) {
	int i;

	i = 077;
	printf("%d\n", i);

	i = 0x77;
	printf("%d\n", i);

	i = 0XABC;
	printf("%d\n", i);

}

void ex_02(void) {
	float a = 010E2;
	float b = 32.1E+5;
//	int   c = 0790;
//	int   d = 100_000;
	float e = 3.97e-2;
}

void ex_03(void) {
	short unsigned int sui;
//	short float sf;
	long double ld;
	unsigned long ul;
}

void ex_04(void) {
	char c;
	int i;

	i += c;
	c = c * 2 - 1;
	putchar(c);
//	printf(c);
}

void ex_05(void) {
	int i;

	i = 'A':
	printf("%d\n", i);

	i = 0b1000001;
	printf("%d\n", i);

	i = 0101;
	printf("%d\n", i);

	i = 0b1000001;
	printf("%d\n", i);
}

void ex_06(void) {
	char a = 31;
	short b = 365;
	short c = 1440;
	int d = 86400;
}

void ex_07(void) {
//	\b = \10
//	\t = \11
//	\n = \12
//	\r = \15
}

void ex_08(void) {

//	\b = \x08
//	\t = \x09
//	\n = \x0a
//	\r = \x0d
}

void ex_09(void) {


//	i / j + 'a': // will be int
}

void ex_10(void) {
	// unsigned int, because the (int) cast applies only to j, not j * k.
}

void ex_11(void) {
	// int * float / double will be double
}

void ex_12(void) {
	//	The value of i is converted to float and added to f,
	//	then the result is converted to double and stored in d.
}

void ex_13(void) {
	char c = '\1':
	short s = 2;
	int i = -3;
	long l = 5;
	float f = 6.5f;
	double d = 7.5f;

//	c * i = int;
//	s + l = long;
//	f / c = float;
//	d / s = double;
//	f - d = float;
//	int (f) = int;
}

void ex_14(void) {
//	Converting f to int will fail
//	if the value stored in f exceeds the largest value of type int.
	float f, frac = f - (int)f;
}

void ex_15(void) {
	// DUNNO how to determine it, use <stdint.h> instead
}


// PROJECTS //

// square2 modified
void pr_01(void) {
	int i, n, offset = 1;
	short s;
	long l;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);

	printf("          n      s           i                   l\n");
	printf("--------------------------------------------------\n");
	for (s = offset, i = offset, l = offset; i <= n + offset; s++, i++, l++)
		printf("%11d%7hd%12d%20ld\n", i, s * s, i * i, l * l);

	// short will end at 181, giving 32761
	// int will end at 46340, giving 2147395600
	// long will end at JAVA HEAP ERROR...

}

// square2 modified
void pr_02(void) {
	int i, n;
	short s;
	long l;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);

	printf("          n      s           i                   l\n");
	printf("--------------------------------------------------\n");
	for (s = 0, i = 0, l = 0;
	i <= n;
	s++, i++, l++) {
		printf("%11d%7hd%12d%20ld\n", i, s * s, i * i, l * l);
		if ((i % 24) == 0)
			getchar();
	}

}

// sum2 modified
void pr_03(void) {
	double n, sum = 0;

	printf("This program prints a series of fractions (in decimal).\n");
	printf("Enter numbers (0 to terminate): ");
	scanf("%lf", &n);

	while (n != 0) {
		sum += n;
		scanf("%lf", &n);
	}

	printf("The sum is: %lf\n", sum);
}

// Telephone number from letters
void pr_04(void) {
	char ch;

	printf("Enter phone number: ");
	ch = getchar();
	while (ch != '\n') {
		switch (ch) {
		case 'A': case 'B': case 'C':
			printf("%d", 2); break;
		case 'D': case 'E': case 'F':
			printf("%d", 3); break;
		case 'G': case 'H': case 'I':
			printf("%d", 4); break;
		case 'J': case 'K': case 'L':
			printf("%d", 5); break;
		case 'M': case 'N': case 'O':
			printf("%d", 6); break;
		case 'P': case 'Q': case 'R': case 'S':
			printf("%d", 7); break;
		case 'T': case 'U': case 'V':
			printf("%d", 8); break;
		case 'W': case 'X': case 'Y': case 'Z':
			printf("%d", 9); break;
		default:
			printf("%c", ch); break;
		}
		ch = getchar();
	}
}

// Scrabble
void pr_05(void) {
	int sum = 0;
	char ch;

	printf("Enter a word: ");

	while ((ch = getchar()) != '\n')
		switch (toupper(ch)) {
		case 'D': case 'G':
			sum += 2; break;
		case 'B': case 'C': case 'M': case 'P':
			sum += 3; break;
		case 'F': case 'H': case 'V': case 'W': case 'Y':
			sum += 4; break;
		case 'K':
			sum += 5; break;
		case 'J': case 'X':
			sum += 8; break;
		case 'Q': case 'Z':
			sum += 10; break;
		default:
			sum++; break;
		}

	printf("Scrabble value: %d\n", sum);
}

// size of all types
void pr_06(void) {
	printf("Size of int: %zu\n", sizeof(int));
	printf("Size of short: %zu\n", sizeof(short));
	printf("Size of long: %zu\n", sizeof(long));
	printf("Size of float: %zu\n", sizeof(float));
	printf("Size of double: %zu\n", sizeof(double));
	printf("Size of long double: %zu\n", sizeof(long double));
}

// Fraction computation
void pr_07(void) {
	int num1, denom1, num2, denom2, result_num, result_denom;
	char operator;

	printf("Enter two fractions separated by a operator: ");
	scanf("%d / %d %1c %d / %d", &num1, &denom1, &operator, &num2, &denom2);

	switch (operator) {
	case '+':
		result_num = num1 * denom2 + num2 * denom1;
		result_denom = denom1 * denom2;
		break;
	case '-':
		result_num = num1 * denom2 - num2 * denom1;
		result_denom = denom1 * denom2;
		break;
	case '*':
		result_num = num1 * num2;
		result_denom = denom1 * denom2;
		break;
	case '/':
		result_num = num1 * denom2;
		result_denom = num2 * denom1;
		break;
	}

	printf("The result is %d/%d\n", result_num, result_denom);
}

// Flight departments modified
void pr_08(void) {
	int hh, mm, entered, closestToken = 0,
		closestDistance, distance;
	char s1;

	printf("Enter a 12-hour time: ");
	scanf("%2d:%2d %1c", &hh, &mm, &s1);

	if (toupper(s1) == 'P') {
		hh += 12;
	}


	entered = hh * 60 + mm;

	distance = 480 - entered;
	distance = distance >= 0 ? distance : -distance;
	closestDistance = distance;
	closestToken = 480;

	distance = 583 - entered;
	distance = distance >= 0 ? distance : -distance;
	if (distance < closestDistance) {
		closestDistance = distance;
		closestToken = 583;
	}

	distance = 679 - entered;
	distance = distance >= 0 ? distance : -distance;
	if (distance < closestDistance) {
		closestDistance = distance;
		closestToken = 679;
	}

	distance = 767- entered;
	distance = distance >= 0 ? distance : -distance;
	if (distance < closestDistance) {
		closestDistance = distance;
		closestToken = 767;
	}

	distance = 840 - entered;
	distance = distance >= 0 ? distance : -distance;
	if (distance < closestDistance) {
		closestDistance = distance;
		closestToken = 840;
	}

	distance = 945 - entered;
	distance = distance >= 0 ? distance : -distance;
	if (distance < closestDistance) {
		closestDistance = distance;
		closestToken = 945;
	}

	distance = 1140 - entered;
	distance = distance >= 0 ? distance : -distance;
	if (distance < closestDistance) {
		closestDistance = distance;
		closestToken = 1140;
	}

	distance = 1305 - entered;
	distance = distance >= 0 ? distance : -distance;
	if (distance < closestDistance) {
		closestDistance = distance;
		closestToken = 1305;
	}

	switch (closestToken) {
	case 480:
		printf("Closest departure time is %2d:%.2d a.m., arriving at %2d:%.2d a.m.",
				8, 0, 10, 16); break;
	case 583:
		printf("Closest departure time is %2d:%.2d a.m., arriving at %2d:%.2d a.m.",
				9, 43, 11, 52); break;
	case 679:
		printf("Closest departure time is %2d:%.2d a.m., arriving at %2d:%.2d p.m.",
				11, 19, 1, 31); break;
	case 767:
		printf("Closest departure time is %2d:%.2d p.m., arriving at %2d:%.2d p.m.",
				12, 47, 3, 0); break;
	case 840:
		printf("Closest departure time is %2d:%.2d p.m., arriving at %2d:%.2d p.m.",
				2, 0, 4, 8); break;
	case 945:
		printf("Closest departure time is %2d:%.2d p.m., arriving at %2d:%.2d p.m.",
				3, 45, 5, 55); break;
	case 1140:
		printf("Closest departure time is %2d:%.2d p.m., arriving at %2d:%.2d p.m.",
				7, 0, 9, 20); break;
	case 1305:
		printf("Closest departure time is %2d:%.2d p.m., arriving at %2d:%.2d p.m.",
				9, 45, 11, 58); break;
	}
}

void pr_09(void) {
	int hh, mm;
	char s1;

	printf("Enter a 12-hour time: ");
	scanf("%2d:%2d %1c", &hh, &mm, &s1);

	if (toupper(s1) == 'P') {
		hh += 12;
	}

	printf("Equivalent 24-hour time: %d:%.2d", hh, mm);
}

void pr_10(void) {
	int vowels = 0;
	char ch;

	printf("Enter a sentence: ");
	ch = getchar();
	while (ch != '\n') {
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
			vowels++;
		ch = getchar();
	}
	printf("Your sentence contains 6 vowels.");
}

void pr_11(void) {
	char first, temp;

	printf("Enter a first and last name: ");
//	find first nonblank character
	while ((first = getchar()) == ' ')
		;
//	skip spaces
	while (getchar() != ' ')
		;
//	find first nonblank character
	while ((temp = getchar()) == ' ')
		;

	while (temp != ' ' && temp != '\n') {
		putchar(temp);
		temp = getchar();
	}
	printf(", %c.", first);
}

void pr_12(void) {
	int i = 1;
	float result, frac = 1.0f;
	char ch, lastOperand = '+';

	printf("Enter an expression: ");
	while ((ch = getchar()) != '\n') {
		switch (ch) {
		case '0': case '1': case '2': case '3': case '4':
		case '5': case '6': case '7': case '8': case '9':
			switch (lastOperand) {
			case '+':
				result += (ch - '0') * (frac / i);
				break;
			case '-':
				result -= (ch - '0') * (frac / i);
				break;
			case '*':
				result *= (ch - '0') * (frac / i);
				break;
			case '/':
				result /= (ch - '0') * (frac / i);
				break;
			}
			i = 10;
			break;
		case '+': case '-': case '/': case '*':
			lastOperand = ch;
			frac = 1.0f;
			i = 1;
			break;
		case '.':
			frac = 0.1f;
			i = 1;
			break;
		}

	}
	printf("Value of expression: %g", result);
}

void pr_13(void) {
	char ch;
	int words = 1;
	float len = 0;

	printf("Enter a sentence: ");
	ch = getchar();
	while (ch != '\n') {
		if (ch == ' ')
			words++;
		else
			len++;
		ch = getchar();
	}

	printf("Avrage word lenght: %.1f", len / words);
}

void pr_14(void) {
//	y is initial guess
	double root, x, y = 1;

	printf("Enter a positive number: ");
	scanf("%lf", &x);

	do {
//		also the new value of y
		root = (y + (x / y)) / 2;
	} while ((fabs(y - root) >= root * 0.00001) && (y = root));

	printf("Square root: %g", root);
}


// Testing what maximum factorial can be storen in what type
void pr_15(void) {
	int i = 1, n, c;
	short s = 1;
	long l = 1L;
	long long ll = 1LL;
	float f = 1.0f;
	double d = 1;
	long double ld = 1.0L;

	printf("This program prints a table of factorials.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);

	printf("    n       s             i                      l                        ll\n");
	printf("-------------------------------------------------------------------------------------------\n");
	for (c = 1; c <= n; c++) {
		printf("%5d", c);
		s *= (short)c;
		i *= (int)c;
		l *= (long)c;
		ll *= (long long)c;
		f *= (float)c;
		d *= (double)c;
		ld *= (long double)c;
//		printf("%8hd%14d%24ld%24lld%15f\n", s, i, l, ll, f);
		printf("%50f%30g\n", f, d);
		printf("%30Lg\n", ld);
	}

	// short will end at 7, giving 5040
	// int will end at 12, giving 479001600
	// long will end at 20, giving 2432902008176640000
	// long long end at 20, giving 2432902008176640000
	// float will end at 34, giving 295232822996533287161359432338880069632
	// double will end at 170, giving 7.25742e+306 (f*cking long number)
	// long double end at 1754, giving 1.97926e+4930 ( !? )

}
