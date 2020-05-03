/*
 * rpn.c
 *
 *  Created on: Jun 13, 2013
 *      Author: delmadord
 */


/* RPN Reverse polish notation with stack */

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "stack.h"



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



