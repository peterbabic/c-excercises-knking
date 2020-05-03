/*
 * stack.h
 *
 *  Created on: Jun 13, 2013
 *      Author: delmadord
 */

#ifndef STACK_H_
#define STACK_H_

#include <stdbool.h>

#define STACK_SIZE 100


void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int ch);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);

#endif /* STACK_H_ */
