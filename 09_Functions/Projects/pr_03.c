/*
 * pr_03.c
 *
 *  Created on: Feb 18, 2013
 *      Author: delmadord
 */


// NOT WORKING - I'VE NO IDEA


#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

#define MAP_WIDTH 10
#define MAP_HEIGHT 10

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

// Map walk
void pr_09(void) {
	char ch, map[MAP_WIDTH][MAP_HEIGHT] = {{0}};
	int  i, x, y, direction;
	bool usedDirection[4] = {false};

	srand((unsigned) time(NULL));

	x = 0;
	y = 0;
	//	map[x][y] = ch;
	//	65 is 'A', 90 is 'Z'
	for (ch = 'A'; ch <= 'Z'; ch++) {
		map[x][y] = ch;

//		Reset directions
		for (i = 0; i < 4; i++)
			usedDirection[i] = false;

		while (1) {
			direction = (rand() % 4);
			usedDirection[direction] = true;

			if(direction == 0 && (y + 1) < MAP_HEIGHT && !map[x][y + 1])
				break;
			if(direction == 1 && (x + 1) < MAP_WIDTH && !map[x + 1][y])
				break;
			if(direction == 2 && (y - 1) >= 0 && !map[x][y - 1])
				break;
			if(direction == 3 && (x - 1) >= 0 && !map[x - 1][y])
				break;

//			ALl directions are used and we still dont have a path
			if (usedDirection[0] && usedDirection[1] &&
					usedDirection[2] && usedDirection[3])
				goto terminate;

		}

		switch (direction) {
			case 0: y++; break;
			case 1: x++; break;
			case 2: y--; break;
			case 3: x--; break;
		}

	}

	terminate:
	for (y = 0; y < MAP_WIDTH; y++) {
		for (x = 0; x < MAP_WIDTH; x++) {
			if (map[x][y])
				printf("%c ", map[x][y]);
			else
				printf(". ");
		}
		printf("\n");
	}
}

void generate_random_walk(char walk[10][10]) {

}
