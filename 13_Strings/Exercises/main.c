/*
 * main.c
 *
 *  Created on: Jun 10, 2013
 *      Author: delmadord
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

void ex_01(void);
void ex_02(void);
void ex_03(void);
// ex_04
int read_line(char str[], int n);
// ex_05
char *capitalize(char *s1);
// ex_06
void censor(char s[]);
void ex_07(void);
void ex_08(void);
void ex_09(void);
// ex_11
int my_strcmp(char *s, char *t);
// ex_12
void get_extension(const char *file_name, char *extension);
// ex_13
void build_index_url(const char *domain, char *index_url);
void ex_14(void);
int ex_15(char *s, char *t);
// ex_16
int count_spaces(const char *s);
// ex_17
bool test_extension(const char *file_name, const char *extension);

int main(void) {


	return 0;
}

/*
void ex_01(void) {
	printf("1|");
	printf("%c", '\n');

//	printf("2|");
//	printf("%c", "\n");

//	printf("3|");
//	printf("%s", '\n');

	printf("4|");
	printf("%s", "\n");

//	printf("5|");
//	printf('\n');

	printf("6|");
	printf("\n");

	printf("7|");
	putchar('\n');

//	printf("8|");
//	putchar("\n");

//	printf("9|");
//	puts('\n');

//	printf("10|");
//	puts("\n"); // actually prints two new lines

	printf("11|");
	puts("");
}

void ex_02(void) {
	char *p = "abc";

	putchar(p); 	// p is adress so char with some random adress is useless
	putchar('\n');

	putchar(*p); 	// only the first character, but legal
	putchar('\n');

	puts(p);		// ok
	putchar('\n');

	puts(*p);
	putchar('\n');	// shows nothing, *p is not a pointer
}

void ex_03(void) {
	int i, j;
	char s[10];

	scanf("%d%s%d", &i, s, &j); // 12abc34 56def78
	printf("i = %d, s = %s, j = %d", i, s, j); // i = 12, s = abc34, j = 56
}

int read_line(char str[], int n) {
	int ch, i = 0;

	while ((ch = getchar()) != '\n' && ch != EOF)
		if (i < n)
			str[i++] = ch;

	str[i] = '\0';
	return i;

}


// NOT WORKING
char *capitalize(char *s1) {
	char *p = s1;
	while (*p) {
		*p = toupper(*p);
		p++;
	}
//	*p = '\0';

	return s1;
}


void censor(char s[]) {
  int i;

  for (i = 0; s[i] != '\0'; i++)
    if (s[i] == 'f' && s[i+1] == 'o' && s[i+2] =='o')
      s[i] = s[i+1] = s[i+2] = 'x';
}

void ex_07(void) {
//	d)
}

void ex_08(void) {
//	tired-or-wired?
}

void ex_09(void) {
	char s1[15], s2[15];
	strcpy(s1, "computer");
	strcpy(s2, "science");
	if (strcmp(s1, s2) < 0)
		strcat(s1, s2);
	else
		strcat(s2, s1);
	s1[strlen(s1) - 6] = '\0';
	printf("%s", s1);  // computers
}
*/


int my_strcmp(char *s, char *t) {
	for (; *s == *t; s++, t++)
		if (*s == '\0')
			return 0;
	return *s - *t;
}

void get_extension(const char *file_name, char *extension) {
	while (*file_name && *file_name != '.')
		file_name++;
	if (strlen(++file_name))
		strcpy(extension, file_name);

}

void build_index_url(const char *domain, char *index_url) {
	strcpy(index_url, "http://www.");
	strcat(index_url, domain);
	strcat(index_url, "/index.html");
}

void ex_14(void) {
	char s[] = "Hsjodi", *p;

	for (p = s; *p; p++)
		--*p;
	puts(s);
	// Function outputs "Grinch"
}

// The length of the longest prefix of the string s
// that consists entirely of characters from the string t.
// Or, equivalently, the position of the first character in s
// that is not also in t.
int ex_15(char *s, char *t) {
	char *p1, *p2;

	for (p1 = s; *p1; p1++) {
		for (p2 = t; *p2; p2++) {
			if (*p1 == *p2)
				break;
		}
		if (*p2 == '\0')
			break;
	}
	return p1 - s;
}

int count_spaces(const char *s) {
	int count = 0;

	while (*s)
		if (*s++ == ' ')
			count++;
	return count;
}

// NOT WORKING
bool test_extension(const char *file_name, const char *extension) {
	char ext[10];
	get_extension(file_name, ext);
	return strcmp(toupper(ext), toupper(extension)) == 0;
}

