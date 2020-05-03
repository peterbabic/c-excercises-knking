// DO NOT KNOW WHAT TO DO

#include <stdio.h>

void find_closest_flight(int desired_time, int *departure_time,
		int *arrival_time);


// Flight departures
int main(void) {
	int hh, mm, entered, closestToken = 0,
		closestDistance, distance;

	printf("Enter a 24-hour time: ");
	scanf("%2d:%2d", &hh, &mm);

	entered = hh * 60 + mm;

	distance = 480 - entered;
	distance = distance >= 0 ? distance : -distance;
	closestDistance = distance;
	closestToken = 480;

	distance = 583 - entered;
	distance = distance >= 0 ? distance : -distance;
	if (distance < closestDistance) {
		closestDistance = distance;
		closestToken = 583;
	}

	distance = 679 - entered;
	distance = distance >= 0 ? distance : -distance;
	if (distance < closestDistance) {
		closestDistance = distance;
		closestToken = 679;
	}

	distance = 767- entered;
	distance = distance >= 0 ? distance : -distance;
	if (distance < closestDistance) {
		closestDistance = distance;
		closestToken = 767;
	}

	distance = 840 - entered;
	distance = distance >= 0 ? distance : -distance;
	if (distance < closestDistance) {
		closestDistance = distance;
		closestToken = 840;
	}

	distance = 945 - entered;
	distance = distance >= 0 ? distance : -distance;
	if (distance < closestDistance) {
		closestDistance = distance;
		closestToken = 945;
	}

	distance = 1140 - entered;
	distance = distance >= 0 ? distance : -distance;
	if (distance < closestDistance) {
		closestDistance = distance;
		closestToken = 1140;
	}

	distance = 1305 - entered;
	distance = distance >= 0 ? distance : -distance;
	if (distance < closestDistance) {
		closestDistance = distance;
		closestToken = 1305;
	}

	switch (closestToken) {
	case 480:
		printf("Closest departure time is %2d:%.2d a.m., arriving at %2d:%.2d a.m.",
				8, 0, 10, 16); break;
	case 583:
		printf("Closest departure time is %2d:%.2d a.m., arriving at %2d:%.2d a.m.",
				9, 43, 11, 52); break;
	case 679:
		printf("Closest departure time is %2d:%.2d a.m., arriving at %2d:%.2d p.m.",
				11, 19, 1, 31); break;
	case 767:
		printf("Closest departure time is %2d:%.2d p.m., arriving at %2d:%.2d p.m.",
				12, 47, 3, 0); break;
	case 840:
		printf("Closest departure time is %2d:%.2d p.m., arriving at %2d:%.2d p.m.",
				2, 0, 4, 8); break;
	case 945:
		printf("Closest departure time is %2d:%.2d p.m., arriving at %2d:%.2d p.m.",
				3, 45, 5, 55); break;
	case 1140:
		printf("Closest departure time is %2d:%.2d p.m., arriving at %2d:%.2d p.m.",
				7, 0, 9, 20); break;
	case 1305:
		printf("Closest departure time is %2d:%.2d p.m., arriving at %2d:%.2d p.m.",
				9, 45, 11, 58); break;
	}

	return 0;
}
