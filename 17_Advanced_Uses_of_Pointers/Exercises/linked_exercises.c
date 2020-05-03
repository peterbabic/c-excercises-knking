/*
 * linked_exercises.c
 *
 *  Created on: Jun 24, 2013
 *      Author: delmadord
 */

#include <stdlib.h>
#include <stdio.h>


struct node{
	int value;
	struct node *next;
};

struct node *add_list_beginnig(struct node *list, int n);
struct node *add_list_end(struct node **list, int n);
struct node *search_list(struct node *list, int n);
void delete_from_list(struct node **list, int n);

void truncate_list(struct node *list);

int count_occurences(struct node *list, int n);
struct node *find_last(struct node *list, int n);

void *my_malloc(size_t size);

int main(void) {
	struct node *q, *list = NULL;
	add_list_end(&list, 1);
	add_list_end(&list, 2);
	add_list_end(&list, 3);
//	truncate_list(list);
	add_list_end(&list, 4);
	add_list_end(&list, 5);
	add_list_end(&list, 6);

	delete_from_list(&list, 1);


	// Change n
	int i, n = 2, c = count_occurences(list, n);
	printf("occurences of %d: %d\n", n, c);
	if (c > 0) {
		struct node *p, *last_n = find_last(list, n);
		for (i = 1, p = list; p != last_n; p = p->next, i++)
			;
		printf("last occurence of %d is at %d. node\n\n", n, i);
	}
	printf("list itself:\n");
	q = list;
	while (q != NULL) {
		printf("\t%d\n", list->value);
		list = list->next;
	}

	return 0;
}


struct node *add_list_beginnig(struct node *list, int n) {
	struct node *new_node = my_malloc(sizeof(struct node));

	new_node->value = n;
	new_node->next = list;
	return new_node;
}

// adds element to the end of the list
// in some cases, the brackets around *list aren't necessary,
// but I left there for consistency
struct node *add_list_end(struct node **list, int n) {
	// make list point to pointer to last element
	// (that is pointing to NULL)
	while ((*list) != NULL)
	    list = &((*list)->next);

	// now list points to pointer to new node
	// (the new last element, which now points to NULL)
	(*list) = my_malloc(sizeof(struct node));
	(*list)->value = n;
	(*list)->next = NULL;

	// returns the pointer to the new node (last element)
	return (*list);
}

struct node *insert_into_ordered_list
					(struct node *list, struct node *new_node) {
	// new_node is empty
	if (new_node == NULL)
		return NULL;

	// list is empty
	if (list == NULL) {
		list = new_node;
		list->next = NULL;
		return list;
	}

	struct node *cur = list, *prev = NULL;
	while (cur->value <= new_node->value) {
		prev = cur;
		cur = cur->next;
	}

	prev->next = new_node;
	new_node->next = cur;
	return list;
}

struct node *search_list(struct node *list, int n) {
	while (list != NULL && list->value != n)
		list = list->next;
	return list;
}

void delete_from_list(struct node **list, int n) {
	// make list point to pointer to node before node with n
	while ((*list)->next->value != n) {
		list = &((*list)->next);
		// next iteration would cause SF (otherwise, n wasnt found)
		if ((*list)->next == NULL)
			return;
	}

	struct node *jump = (*list)->next->next;
	free((*list)->next);
	(*list)->next = jump;
}


void truncate_list(struct node *list) {
	struct node *temp, *p = list;
	while (p != NULL) {
	  temp = p;
	  p = p->next;
	  free(temp);
	}
}



// find how many times n occurs in the list,
int count_occurences(struct node *list, int n) {
	int count = 0;
	while (list != NULL) {
		if (list->value == n)
			count++;
		list = list->next;
	}

	return count;
}

// returns pointer to the last node cointaining n, NULL if n not found
struct node *find_last(struct node *list, int n) {
	struct node *p = NULL;
	while (list != NULL) {
		if (list->value == n)
			p = list;
		list = list->next;
	}
	return p;
}

void *my_malloc(size_t size) {
	void *p = malloc(size);
	if (p == NULL) {
		printf("Memory allocation unsuccessful.\n");
		exit(EXIT_FAILURE);
	}
	return p;
}

