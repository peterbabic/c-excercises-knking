/*
 * departures.c
 *
 *  Created on: Jun 17, 2013
 *      Author: delmadord
 */

#include <stdio.h>

#define NUM_FLIGHTS \
	((int) (sizeof(ft) / sizeof(ft[0])))

#define ABS(x) ((x) >= 0 ? (x) : -(x))

// number of minutes since midnight
struct flight {
	int departure, arrival;
};

struct time {
	int hours, minutes;
};

// Flight departures
int main(void) {
	// Departures
	const struct flight ft[] = {
			{480, 616}, {583, 712}, {679, 811},
			{767, 900}, {840, 968}, {945, 1075},
			{1140, 1280}, {1305, 1438}};
	// Pointer to closest departure
	struct flight *cp;
	// Stored time
	struct time t;

	printf("Enter a 24-hour time: ");
	scanf("%2d:%2d", &t.hours, &t.minutes);

	// Minutes
	int since_midnight = t.hours * 60 + t.minutes;
	// Anything sooner than midnight (1440 min) will fit
	int i, closest = 1440;
	for (i = 0; i < NUM_FLIGHTS; i++) {
		int delta = ABS(ft[i].departure - since_midnight);
		if (delta < closest) {
			closest = delta;
			cp = &ft[i];
		}
	}

	printf("Closest departure time is %2d:%.2d a.m., arriving at %2d:%.2d a.m.",
			cp->departure / 60, cp->departure % 60,
			cp->arrival /60, cp->arrival % 60);

	return 0;
}
