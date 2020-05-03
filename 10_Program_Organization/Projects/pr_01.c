#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#define STACK_SIZE 100

/* external variables */
char contents[STACK_SIZE];
int top = 0;
bool nested = true;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char ch);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);


int main(void) {
	char ch;
	printf("Enter parentheses and/or braces: ");
	while ((ch = getchar()) != '\n' && nested == true) {
		// Push left
		if (ch == '{' || ch == '(' || ch == '[')
			push(ch);
		// Check if popped left is matched
		else if (ch == '}')
			nested = (pop() == '{');
		else if (ch == ')')
			nested = (pop() == '(');
		else if (ch == ']')
			nested = (pop() == '[');
	}

	// Print the result
	if (is_empty() && nested)
		printf("Parentheses are nested properly.");
	else
		printf("Parentheses aren't nested properly.");

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

void push(char ch) {
	if (is_full())
		stack_overflow();

	contents[top++] = ch;
}

char pop(void) {
	if (is_empty())
		stack_underflow();

	return contents[--top];
}

void stack_overflow(void) {
	printf("Stack overflow!");
	exit(EXIT_FAILURE);
}

void stack_underflow(void) {
	nested = false;
}
