#include <stdio.h>

// ex_01
// They are different structures - LEGAL
struct { int x, y; } x;
struct { int x, y; } y;

// ex_02
struct {
	double real, imaginary;
} 	c1 = {.real = 0.0, .imaginary = 1.0},
	c2 = {.real = 1.0, .imaginary = 0.0},
	c3;

// ex_03
struct complex {
  double real, imaginary;
};

struct complex make_complex1(double real, double imaginary) {
	struct complex c;

  c.real = real;
  c.imaginary = imaginary;
  return c;
}

struct complex add_complex1(struct complex c1, struct complex c2) {
	struct complex c3;

  c3.real = c1.real + c2.real;
  c3.imaginary = c1.imaginary + c2.imaginary;

  return c3;
}



// ex_04
typedef struct {
  double real, imaginary;
} Complex;

Complex make_complex2(double real, double imaginary) {
  Complex c;

  c.real = real;
  c.imaginary = imaginary;
  return c;
}

Complex add_complex2(Complex c1, Complex c2) {
  Complex c3;

  c3.real = c1.real + c2.real;
  c3.imaginary = c1.imaginary + c2.imaginary;

  return c3;
}

// ex_05
struct date {
	int day, month, year;
};

int day_of_year(struct date d);
int compare_dates(struct date d1, struct date d2);

// ex_06
struct time {
	short hours, minutes, seconds;
};

struct time split_time(long total_seconds);

// MAIN
int main(void) {
	long s = 86401 * 5;
	struct time t = split_time(s);
	printf("%ld seconds is %hd hours, %hd minutes and %hd seconds",
			s, t.hours, t.minutes, t.seconds);

	return 0;
}

int day_of_year(struct date d) {
	int feb = (d.year % 4 == 0) ? 29 : 28;
	int days_in_months[] = {0,
			31, feb, 31, 30, 31, 30,
			31,  31, 30, 31, 30, 31};
	int i, days = d.day;
	for (i = 1; i < d.month; i++)
		days += days_in_months[i];

	return days;
}

int compare_dates(struct date d1, struct date d2) {
	// Trasnforms date into days
	int days1 = day_of_year(d1) + d1.year * 365 + (d1.year % 4);
	int days2 = day_of_year(d2) + d2.year * 365 + (d2.year % 4);

	if (days1 < days2)
		return -1;
	else if (days1 == days2)
		return 0;
	else
		return 1;
}

struct time split_time(long total_seconds) {
	struct time t;
	t.hours = total_seconds / 3600;
	total_seconds %= 3600;
	t.minutes = total_seconds / 60;
	t.seconds = total_seconds % 60;
	return t;
}


