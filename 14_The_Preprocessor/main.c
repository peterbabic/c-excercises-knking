/*
 * main.c
 *
 *  Created on: Jun 12, 2013
 *      Author: delmadord
 */

#include <stdio.h>
#include <string.h>
#include <math.h>

// ex_01
#define CUBE(x) ((x)*(x)*(x))
#define REMAIND_4(n) ((n) % 4)
#define C1(x, y) (((x) * (y)) == 100)

// ex_02
#define NELEMS(a) ((int) (sizeof (a) / sizeof (a[0])))

// ex_03
#define DOUBLE(x) (2 * (x))

// ex_04
#define AVG(x,y) (((x) + (y)) / 2)
#define AREA(x,y) ((x) * (y))

// ex_05
#define TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))

// ex_06
#define DISP(f,x) printf(#f "(%g) = %g\n", x, f(x));

// ex_07
#define GENERIC_MAX(type)					\
type type##_max(type x, type y)	{			\
	return x > y ? x : y;					\
}

// ex_08
#define STRINGIZE(x) #x
#define INDIR(x) STRINGIZE(x)
#define LINE_FILE "Line " INDIR(__LINE__) " of file " INDIR(__FILE__)

// ex_09
#define CHECK(x,y,n) (((x)>=0&&(x)<n)&&(y)>=0&&(y)<n)	// 0 <= x, y < n
//#define MEDIAN(x,y,z)
//#define POLUNOMIAL(x)

// ex_10
// Funciton calls cannt be used as a macro parameters.

// ex_11
#define ERROR(msg, ...) fprintf(stderr, msg, __VA_ARGS__)

// ex_12
#define M 10

// ex_13
// "N is undefined"

// ex_14
// 3 compiler errors - M, M1 and one other

// ex_15
// fuck it

// ex_16
#define IDENT(x) PRAGMA(ident #x)
#define PRAGMA(x) _Pragma(#x)

int main(void) {
	printf("3 ^ 3 = %d\n", CUBE(3));
	printf("101 % 4 = %d\n", REMAIND_4(101));
	printf("is 5 * 21 == 100? %d\n", C1(5, 21));
	printf("\n");

	int elems[5];
	printf("array elems contains %d elements\n", NELEMS(elems));
	printf("\n");

	printf("%d\n", DOUBLE(1+2));
	printf("%d\n", 4/DOUBLE(2));
	printf("\n");

	printf("%f\n", AVG(5.0, 8.0));
	printf("%d\n", AREA(5, 8));
	printf("\n");

	//putchar(('a'<=(s[++i])&&(s[++i])<='z'?(s[++i])-'a'+'A':(s[++i])));
	int i;
	char s1[5], s2[5];
	i = 0;
	strcpy(s1, "abcd");
	putchar(TOUPPER(s1[++i])); 	// output is D
	printf("\n");
	i = 0;
	strcpy(s2, "0123");
	putchar(TOUPPER(s2[++i])); 	// output is 2
	printf("\n\n");

	DISP(sqrt, 3.0);
	printf("\n");

	// GENERIC_MAX(long);

	printf("%s\n", LINE_FILE);
	printf("\n");

	printf("%d\n", CHECK(1,2,5));
//	printf("%d\n", MEDIAN(1,2,5));
//	printf("%d\n", POLUNOMIAL(1));
	printf("\n");

	ERROR("Range error: index = %d\n", 1);
	printf("\n");

	// #ifndef M and #if !defined(M) will fail

	IDENT(foo); // _Pragma("ident \"foo\"") - ignored


	return 0;
}
