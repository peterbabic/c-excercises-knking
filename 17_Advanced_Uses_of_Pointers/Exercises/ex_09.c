/*
 * ex_09.c
 *
 *  Created on: Jun 18, 2013
 *      Author: delmadord
 */
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>


struct node{
	int value;
	struct node *next;
};

int main(void) {
	// ex_09
	struct node x;
	if ((&x)->value == (*(&x)).value)
		printf("(&x)->value is the same as (*(&x)).value\n");
	if ((*(&x)).value == (*&x).value)
		printf("(*(&x)).value is the same as (*&x).value\n");
	if ((*&x).value == x.value)
		printf("(*&x).value is the same as x.value\n");
	if ((&x)->value ==  x.value)
		printf("So (&x)->value is the same as x.value\n\n");




	return 0;
}

