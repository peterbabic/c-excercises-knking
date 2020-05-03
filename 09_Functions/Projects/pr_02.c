/*
 * pr_02.c
 *
 *  Created on: Feb 18, 2013
 *      Author: delmadord
 */

#include <stdio.h>

float tax_due(float income) {
	float tax;
	if (income <= 750.0f)
		tax = income * .01f;
	else if (income <= 2250.0f)
		tax = income * .02f + 7.50f;
	else if (income <= 3750.0f)
		tax = income * .03f + 37.50f;
	else if (income <= 5250.0f)
		tax = income * .04f + 82.50f;
	else if (income <= 7000.0f)
		tax = income * .05f + 142.50f;
	else
		tax = income * .06f + 230.00f;

	return tax;
}

int main(void) {
	float income;

	printf("Enter income: ");
	scanf("%f", &income);

	printf("Tax due is: %.2f", tax_due(income));

	return 0;
}
