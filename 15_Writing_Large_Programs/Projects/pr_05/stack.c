/*
 * stack.c
 *
 *  Created on: Jun 13, 2013
 *      Author: delmadord
 */

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include "stack.h"

/* external variables */
int contents[STACK_SIZE];
int top = 0;


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
