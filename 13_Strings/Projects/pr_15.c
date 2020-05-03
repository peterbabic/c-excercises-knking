/*
 * pr_15.c
 *
 *  Created on: Jun 12, 2013
 *      Author: delmadord
 */

/* RPN Reverse polish notation with stack */

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#define STACK_SIZE 100
#define EXP_LEN 500

/* external variables */
char contents[STACK_SIZE];
int top = 0;


int evaluate_RPN_expression(const char *exp);
int read_line(char str[], int n);
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int ch);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);


int main(void) {
	char expression[EXP_LEN + 1];
	while (1) {
		printf("Enter an RPN expression: ");
		read_line(expression, EXP_LEN);
		if (expression[0] == 'q')
			break;
		printf("Value of expression: %d\n",
				evaluate_RPN_expression(expression));
	}

	return 0;
}


int evaluate_RPN_expression(const char *exp) {
	make_empty();
	int temp;

	// Read expression until end or until =
	while (*exp && *exp != '=') {
		if (isdigit((int)*exp))
			push(*exp - '0');
		// Operand found (+ and * are comutative)
		else if (*exp == '+')
			push(pop() + pop());
		else if (*exp == '*')
			push(pop() * pop());
		// However, operands - and / are not
		else if (*exp == '-') {
			temp = pop();
			push(pop() - temp);
		}
		else if (*exp == '/'){
			temp = pop();
			push(pop() / temp);
		}
		exp++;
	}
	return pop();
}


void make_empty(void) {
	top = 0;
}

bool is_empty(void) {
	return top == 0;
}

bool is_full(void) {
	return top == STACK_SIZE;
}

void push(int ch) {
	if (is_full())
		stack_overflow();

	contents[top++] = ch;
}

int pop(void) {
	if (is_empty())
		stack_underflow();

	return contents[--top];
}

void stack_overflow(void) {
	printf("The expression is too complex!");
	exit(EXIT_FAILURE);
}

void stack_underflow(void) {
	printf("Not enough operands in expression!");
	exit(EXIT_FAILURE);
}

int read_line(char str[], int n) {
	int ch, i = 0;

	while ((ch = getchar()) != '\n')
		if (i < n)
			str[i++] = ch;
	str[i] = '\0';
	return i;
}

