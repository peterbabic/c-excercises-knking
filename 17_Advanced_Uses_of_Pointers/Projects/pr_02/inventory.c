/*
 * inventory.c
 *
 *  Created on: Jun 16, 2013
 *      Author: delmadord
 */


// COPY OF 16_pr_02

/* Maintains a parts database (array version)
 * Sorts output by part number before printing */
#include <stdio.h>
#include <stdlib.h>
#include "readline.h"
//#include "string.h"

#define NAME_LEN 25
#define MAX_PARTS 100

//typedef int (*compfn)(const void*, const void*);

struct part {
	int number;
	char name[NAME_LEN + 1];
	int on_hand;
} inventory [MAX_PARTS];

int num_parts = 0;

int find_part(int number);
void insert(void);
void search(void);
void update(void);
void print(void);
int compare(struct part *elem1, struct part *elem2);

int main(void) {
//	inventory[0].number = 3;
//	strcpy(inventory[0].name, "b3");
//	inventory[0].on_hand = 1;
//
//	inventory[1].number = 4;
//	strcpy(inventory[1].name, "d4");
//	inventory[1].on_hand = 1;
//
//	inventory[2].number = 2;
//	strcpy(inventory[2].name, "c2");
//	inventory[2].on_hand = 1;
//
//	inventory[3].number = 1;
//	strcpy(inventory[3].name, "a1");
//	inventory[3].on_hand = 1;
//
//	num_parts = 4;

	char code;

	while (1) {
		printf("Enter operation code: ");
		scanf(" %c", &code);
		while (getchar() != '\n')
			;
		switch (code) {
			case 'i':
				insert();
				break;
			case 's':
				search();
				break;
			case 'u':
				update();
				break;
			case 'p':
				print();
				break;
			case 'q':
				return 0;
			default:
				printf("Illegal code\n");
				break;
		}
		printf("\n");
	}
}

int find_part(int number) {
	int i;

	for (i = 0; i < num_parts; i++)
		if (inventory[i].number == number)
			return i;
	return -1;
}

void insert(void) {
	int part_number;

	if (num_parts == MAX_PARTS) {
		printf("Database is full; can't add more parts.\n");
		return;
	}

	printf("Enter part number: ");
	scanf("%d", &part_number);

	if (find_part(part_number) >= 0) {
		printf("Part already exists.\n");
		return;
	}

	inventory[num_parts].number = part_number;
	printf("Enter part name: ");
	read_line(inventory[num_parts].name, NAME_LEN);
	printf("Enter quantity on hand: ");
	scanf("%d", &inventory[num_parts].on_hand);
	num_parts++;
}

void search(void) {
	int i, number;

	printf("Enter part number: ");
	scanf("%d", &number);
	i = find_part(number);
	if (i >= 0) {
		printf("Part name: %s\n", inventory[i].name);
		printf("Quantity on hand: %d\n", inventory[i].on_hand);
	}
	else
		printf("Part not found.\n");
}

void update(void) {
	int i, number, change;

	printf("Enter part number: ");
	scanf("%d", &number);
	i = find_part(number);
	if (i >= 0) {
		printf("Enter change in quantity on hand: ");
		scanf("%d", &change);
		inventory[i].on_hand += change;
	}
	else
		printf("Part not found.\n");
}

void print(void) {
	int i;
	printf("Part Number   Part Name                   "
		   "Quantity on Hand\n");
	qsort(inventory, num_parts, sizeof(struct part), compare);
	for (i = 0; i < num_parts; i++)
		printf("%7d       %-25s%11d\n", inventory[i].number,
			inventory[i].name, inventory[i].on_hand);
}

int compare(struct part *elem1, struct part *elem2) {
   if ( elem1->number < elem2->number)
      return -1;

   else if (elem1->number > elem2->number)
      return 1;

   else
      return 0;
}

