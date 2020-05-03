/*
 * pr_05.c
 *
 *  Created on: Jun 11, 2013
 *      Author: delmadord
 */


// sum command line arguments
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	int sum = 0;
	while (argc--)
		sum += atoi(argv[argc]);
	printf("Total: %d\n", sum);
	return 0;
}
