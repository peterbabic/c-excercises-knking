/*
 * pr_06.c
 *
 *  Created on: Jun 11, 2013
 *      Author: delmadord
 */




#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define NUM_PLANETS 9

bool string_equal(const char *s, const char *t);

int main(int argc, char *argv[]) {
	char *planets[] = {"Mercury", "Venus", "Earth",
					"Mars", "Jupiter", "Saturn",
					"Uranus", "Neptune", "Pluto"};

	int i, j;

	for (i = 1; i < argc; i++) {
		for (j = 0; j < NUM_PLANETS; j++)
			if (string_equal(argv[i], planets[j])) {
				printf("%s is planet %d\n", argv[i], j + 1);
				break;
			}
		if (j == NUM_PLANETS)
			printf("%s is not a planet\n", argv[i]);
	}

	return 0;
}

bool string_equal(const char *s, const char *t) {
  while (toupper(*s++) == toupper(*t++))
    if (*s == '\0')
      return 1;

  return 0;
}
