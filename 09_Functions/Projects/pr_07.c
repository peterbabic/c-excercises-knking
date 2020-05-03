#include <stdio.h>

int power(int n, int exp);

int main(void) {
	int n, exp;
	printf("Please enter a number: ");
	scanf("%d", &n);
	printf("Please enter an exponent: ");
	scanf("%d", &exp);

	printf("%d ^ %d = %d", n, exp, power(n, exp));

	return 0;
}

int power(int base, int exp) {
    int result = 1;
    while (exp)
    {
        if (exp & 1)
            result *= base;
        exp >>= 1;
        base *= base;
    }

    return result;
}
