/*
 * pr_04.c
 *
 *  Created on: Jun 11, 2013
 *      Author: delmadord
 */

// reverse command line arguments

#include <stdio.h>

int main(int argc, char *argv[]) {
	while (argc--)
		printf("%s ", argv[argc]);
	printf("\n");
	return 0;
}
