#include <stdio.h>

#define INCHES_PER_POUND 166

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

#define PI 3.141592f

void dweight(void);
void dweight2(void);

void celsius(void);

void ex_01(void);
void ex_02(void);
void ex_03(void);
void ex_04(void);
void ex_05(void);
void ex_06(void);
void ex_07(void);
void pr_01(void);
void pr_02(void);
void pr_03(void);
void pr_04(void);
void pr_05(void);
void pr_06(void);
void pr_07(void);
void pr_08(void);


int main(void) {
//	dweight();
//	dweight2();

//	celsius();

//	ex_04();

	pr_08();

	return 0;
}

/* Calculates the dimensional weight of the box,
 * constant size */
void dweight(void) {
	int height, lenght, width, volume, weight;

	height = 8;
	lenght = 12;
	width = 10;
	volume = height * lenght * width;
	weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

	printf("Dimensions: %dx%dx%d\n", lenght, width, height);
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", weight);
}

/* Calculates the dimensional weight of the box,
 * user defined size */
void dweight2(void) {
	int height, lenght, width, volume, weight;

	printf("enter height: ");
	scanf("%d", &height);
	printf("enter lenght: ");
	scanf("%d", &lenght);
	printf("enter widht: ");
	scanf("%d", &width);
	volume = height * lenght * width;
	weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

	printf("Dimensions: %dx%dx%d\n", lenght, width, height);
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", weight);
}

/* Converts tempereture from Fahrenheit to Celsius */
void celsius(void) {
	float fahrenheit, celsius;

	printf("Enter Fahrenheit temperature: ");
	scanf("%f", &fahrenheit);

	celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

	printf("Celsius equivalent: %.1f\n", celsius);
}

/* EXERCISES */
void ex_01(void) {
	printf("Hello world\n");
}

void ex_02(void) {
	printf("Parkinson's Law:\nWork expands so as to ");
	printf("fill the time\n");
	printf("available for its completion.\n");
}

void ex_03(void) {
	int height = 8, lenght = 12, width = 10, volume;

	volume = height * lenght * width;

	printf("Dimensions: %dx%dx%d\n", lenght, width, height);
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n",
		(volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND);
}

void ex_04(void) {
	int a, b, c;
	float d, e, f;

	printf("%d %d %d %f %f %f", a, b, c, d, e, f);
}

void ex_05(void) {
	int  _100_bot, bott_by_hun;
}

void ex_06(void) {
	// Reserved
}

void ex_07(void) {
	// for
}

/* PROJECTS */
void pr_01(void) {
	printf("%8c\n", '*');
	printf("%7c\n", '*');
	printf("%6c\n", '*');
	printf("%1c%4c\n", '*', '*');
	printf("%2c%2c\n", '*', '*');
	printf("%3c\n", '*');
}

void pr_02(void) {
	int r = 10;

	printf("Volume of sphere of radius %dm is %fm^3.", r,
			(4.0f / 3.0f) * PI * (r * r * r));
}

void pr_03(void) {
	int r = 0;
	printf("Please enter radius of the sphere (m): ");
	scanf("%d", &r);
	printf("Volume of sphere of radius %dm is %fm^3.", r,
			(4.0f / 3.0f) * PI * (r * r * r));
}

void pr_04(void) {
	float amount;

	printf("Enter an amount: ");
	scanf("%f", &amount);
	printf("With tax added: $%.2f", amount * 1.05f);
}

void pr_05(void) {
	float x;

	printf("Enter x: ");
	scanf("%f", &x);
	printf("3x^5 + 2x^4 - 5x^3 -x^2 - 6 = %f",
			+ 3 * (x * x * x * x * x)
			+ 2 * (x * x * x * x)
			- 5 * (x * x * x)
			- 1 * (x * x)
			+ 7 * (x)
			- 6 * (1));
}

void pr_06(void) {
	float x;

	printf("Enter x: ");
	scanf("%f", &x);
	printf("3x^5 + 2x^4 - 5x^3 -x^2 - 6 = %f",
			((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6);
}

void pr_07(void) {
	int amount, b20, b10, b5;

	printf("Enter a dollar amount: ");
	scanf("%d", &amount);

	b20 = amount / 20;
	amount -= b20 * 20;
	b10 = amount / 10;
	amount -= b10 * 10;
	b5 = amount / 5;
	amount -= b5 * 5;

	printf("\n$20 bills: %d\n$10 bills: %d\n $5 bills: %d\n $1 bills: %d",
			b20, b10, b5, amount);
}

void pr_08(void) {
	float balance, interest, payment;

	printf("Enter amount of loan: ");
	scanf("%f", &balance);
	printf("Enter amount of interest: ");
	scanf("%f", &interest);
	printf("Enter amount of payment: ");
	scanf("%f", &payment);

	float monthly = interest / 100 / 12;

	balance -= payment;
	balance += (balance * monthly);
	printf("\nBalance remaining after fist payment: $%.2f", balance);
	balance -= payment;
	balance += (balance * monthly);
	printf("\nBalance remaining after second payment: $%.2f", balance);
	balance -= payment;
	balance += (balance * monthly);
	printf("\nBalance remaining after third payment: $%.2f", balance);
}
