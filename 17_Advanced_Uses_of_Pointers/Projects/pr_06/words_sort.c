/*
 * words_sort.c
 *
 *  Created on: Jun 24, 2013
 *      Author: delmadord
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define WORD_LEN 20
#define INIT_WORD_COUNT 10


int read_line(char str[], int n);
void *my_malloc(size_t size);
void *my_realloc(void *p, size_t size);
int compare (const void *a, const void *b);

int main(void) {
	int wlen, count = 0, max = INIT_WORD_COUNT;
	char **words = my_malloc(max * sizeof(char *)), word[WORD_LEN + 1];

	while (1) {
		printf("Enter word: ");
		// there are some characters, not just enter
		if ((wlen = read_line(word, WORD_LEN)) == 0)
			break;

		// just make sure there is enough memory
		if (count == max) {
			max *= 2;
			words = my_realloc(words, max * sizeof(char *));
		}

		// add pointer to newly added word to array of pointers to strings
		words[count] = my_malloc(wlen + 1);
		strcpy(words[count++], word);
	}

	int i;
//	printf("\nYou entered words: ");
//	for (i = 0; i < count; i++)
//		printf("%s ", words[i]);

	qsort(words, count, sizeof(char *), compare);
	printf("\nIn sorted order: ");
	for (i = 0; i < count; i++)
		printf("%s ", words[i]);

	return EXIT_SUCCESS;
}


int read_line(char str[], int n) {
	int ch, i = 0;

	while ((ch = getchar()) != '\n')
		if (i < n)
			str[i++] = ch;
	str[i] = '\0';
	return i;
}

void *my_malloc(size_t size) {
	void *p = malloc(size);
	if (p == NULL) {
		printf("Memory allocation unsuccessful.\n");
		exit(EXIT_FAILURE);
	}
	return p;
}

void *my_realloc(void *p, size_t size) {
	void *temp = realloc(p, size);
    if (temp == NULL) {
      printf("Insufficient memory; can't add more items.\n");
      exit(EXIT_FAILURE);
    }
	return temp;
}

int compare (const void *a, const void *b) {
	const char **aa = (const char **)a;
	const char **bb = (const char **)b;

    return strcmp(*aa, *bb);
}
