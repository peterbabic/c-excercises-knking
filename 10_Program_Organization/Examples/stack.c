#include <stdbool.h>

#define STACK_SIZE 100

//void stack_overflow(void);

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

void push(int i) {
//	if (is_full())
//		stack_overflow();
//	else
		contents[top++] = i;
}

int pop(void) {
//	if (is_empty())
//		stack_overflow();
//	else
		return contents[--top];
}
