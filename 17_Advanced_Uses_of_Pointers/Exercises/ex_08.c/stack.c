/*
 * stack.c
 *
 *  Created on: Jun 13, 2013
 *      Author: delmadord
 */

#include <stdbool.h>   /* C99 only */
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

struct node {
	int value;
	struct node *next;
};

struct node *top = NULL;

void make_empty(void) {
	struct node *temp;

	while (top != NULL) {
		temp = top;
		top = top->next;
		free(temp);
	}
}

bool is_empty(void) {
	return top == NULL;
}

bool push(int i) {
	struct node *new_node;

	new_node = malloc(sizeof(struct node));
	if (new_node == NULL)
		return false;

	new_node->value = i;
	new_node->next = top;
	top = new_node;

	return true;
}

int pop(void) {
	struct node *temp;
	int i;

	if (is_empty()) {
		printf("*** Stack underflow; program terminated. ***\n");
		exit(EXIT_FAILURE);
	}

	i = top->value;
	temp = top;
	top = top->next;
	free(temp);

	return i;
}
