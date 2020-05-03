/* RPN Reverse polish notation with stack */

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>



#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE];
int top = 0;


void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int ch);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);


int main(void) {
	char ch = 0;
	int temp;

	while (ch != 'q') {
		printf("Enter an RPN expression: ");
		while (1) {
			scanf(" %c", &ch);
			if (ch == '=' || ch == 'q')
				break;
			// Operand found (+ and * are comutative)
			if (isdigit((int)ch))
				push(ch - '0');
			else if (ch == '+')
				push(pop() + pop());
			else if (ch == '-') {
				temp = pop();
				push(pop() - temp);
			}
			else if (ch == '*')
				push(pop() * pop());
			else if (ch == '/'){
				temp = pop();
				push(pop() / temp);
			}

		}
		printf("Value of expression: %d\n", pop());
		make_empty();
	}

	return 0;
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
