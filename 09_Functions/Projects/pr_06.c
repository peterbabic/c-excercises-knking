#include <stdio.h>

int custom_polynomial(int x);
int powi(int number, int exponent);

int main(void) {
	int x;
	printf("Please enter x: ");
	scanf("%d", &x);

	printf("3x^5 + 2x^4 - 5x^3 - x^2 - 6 = %d", custom_polynomial(x));
	return 0;
}

int custom_polynomial(int x) {
	return  + (3 * powi(x, 5))
			+ (2 * powi(x, 4))
			- (5 * powi(x, 3))
			- (1 * powi(x, 2))
			- (7 * x)
			- 6;
}

int powi(int number, int exponent) {
	int i, product = 1;
	for (i = 0; i < exponent; i++)
		product *= number;

	return product;
}
