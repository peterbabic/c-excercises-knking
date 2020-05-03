/*
 * ptr_stack.c
 *
 *  Created on: Jun 9, 2013
 *      Author: delmadord
 */

#include <stdbool.h>

#define STACK_SIZE 100

int *top_ptr;
int contents[STACK_SIZE];



void push(int i);
int pop(void);
void make_empty(void);
bool is_empty(void);
bool is_full(void);

int main(void) {

	return 0;
}


void push(int i) {
	if (is_full())
		stack_overflow();
	else
		*top_ptr++ = i;
}

int pop(void) {
	if (is_empty())
		stack_underflow();
	else
		return *--top_ptr;
}

void make_empty(void) {
	top_ptr = &contents[0];
}

bool is_empty(void) {
	return top_ptr = &contents[0];
}

bool is_full(void) {
  return top_ptr == &contents[STACK_SIZE];
}
