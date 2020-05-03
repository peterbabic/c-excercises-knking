/*
 * ex_01_05.c
 *
 *  Created on: Jun 17, 2013
 *      Author: delmadord
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define COUNT(x) ((int) (sizeof(x) / sizeof(x[0])))

// ex_01
void *my_malloc(size_t size);
// ex_02
char *duplicate(const char *s);
// ex_03
int *create_array(int n, int init);
// ex_04
struct point {int x, y; };
struct rectangle {struct point upper_left, lower_right; };
struct rectangle *p;
// ex_05
struct {
	union {
		char a, b;
		int c;
	} d;
	int e[5];
} f, *q = &f;


int main(void) {
	char *str = "String to duplicate.";
	char *dup = duplicate(str);
	printf("%s\n\n", dup);



	int i, n = 5, *a = create_array(n, 5);
	printf("The a array: ");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n\n");


	p->upper_left.x = 10;
	p->upper_left.x = 25;
	p->lower_right.x = 20;
	p->lower_right.x = 15;


//	q->b = ' ';
	q->e[3] = 10;
	(*q).d.a = '*';
//	q->d->c = 20;


	return 0;
}


void *my_malloc(size_t size) {
	void *p = malloc(size);
	if (p == NULL) {
		printf("Memory allocation unsuccessful.\n");
		exit(EXIT_FAILURE);
	}
	return p;
}

char *duplicate(const char *s) {
  char *temp = malloc(strlen(s) + 1);

  if (temp == NULL)
    return NULL;

  strcpy(temp, s);
  return temp;
}

int *create_array(int n, int init) {
	int i, *a = my_malloc(n * sizeof(int));
	for (i = 0; i < n; i++)
		a[i] = init;
	return a;
}
