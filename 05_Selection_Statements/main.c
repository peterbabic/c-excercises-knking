/* CHAPTER 5 */

#include <stdio.h>
#include <stdbool.h>

void broker(void);
void date(void);

void ex_01(void);
void ex_02(void);
void ex_03(void);
void ex_04(void);
void ex_05(void);
void ex_06(void);
void ex_07(void);
void ex_08(void);
void ex_09(void);
void ex_10(void);
void pr_01(void);
void pr_02(void);
void pr_03(void);
void pr_04(void);
void pr_05(void);
void pr_06(void);
void pr_07(void);
void pr_08(void);
void pr_09(void);
void pr_10(void);
void pr_11(void);

int main(void) {
//	broker();
//	date();

//	ex_08();

	pr_08();

	return 0;
}

// Calculates a broker's commission
void broker(void) {
	float commision, value;
	printf("Enter value of trade: ");
	scanf("%f", &value);

	if (value < 2500.00f)
		commision = 30.00f + .017f * value;
	else if (value < 6250.00f)
		commision = 56.00f + .0066f * value;
	else if (value < 20000.00f)
		commision = 76.00f + .0034f * value;
	else if (value < 50000.00f)
		commision = 100.00f + .0022f * value;
	else if (value < 500000.00f)
		commision = 155.00f + .0011f * value;
	else
		commision = 255.00f + .0009f * value;

	if (commision < 39.00f)
		commision = 39.00f;

	printf("Commission: $%.2f\n", commision);
}

// Prints date in legal form
void date(void) {
	int month, day, year;

	printf("Enter date (dd/mm/yyyy): ");
	scanf("%d /%d /%d", &day, &month, &year );

	printf("Dated this %d", day);
	switch (day) {
		case 1: case 21: case 31:
			printf("st"); break;
		case 2: case 22:
			printf("nd"); break;
		case 3: case 23:
			printf("rd"); break;
		default:
			printf("th"); break;
	}
	printf(" of ");

	switch (month) {
		case 1: printf("January"); break;
		case 2: printf("February"); break;
		case 3: printf("March"); break;
		case 4: printf("April"); break;
		case 5: printf("May"); break;
		case 6: printf("June"); break;
		case 7: printf("July"); break;
		case 8: printf("August"); break;
		case 9: printf("September"); break;
		case 10: printf("October"); break;
		case 11: printf("November"); break;
		case 12: printf("December"); break;
	}

	printf(", %.4d.\n", year);

}

/* EXERCISES */
void ex_01(void) {
	int i, j, k;

	i = 2; j = 3;
	k = i * j == 6;
	printf("%d\n", k);

	i = 5; j = 10; k = 1;
	printf("%d\n", k > j < j);

	i = 3; j = 2; k = 1;
	printf("%d\n", i < j == j < k);

	i = 3; j = 2; k = 1;
	printf("%d\n", i % j + i < k);
}

void ex_02(void) {
	int i, j, k;

	i = 10; j = 5;
	printf("%d\n", !i < j);

	i = 2; j = 1;
	printf("%d\n", !!i + !j);

	i = 5; j = 0; k = -5;
	printf("%d\n", i && j || k);

	i = 1; j = 2; k = 3;
	printf("%d\n", i < j || k);
}

void ex_03(void) {
	int i, j, k;

	i = 3; j = 4; k = 5;
	printf("%d, ", i < j || ++j < k);
	printf("%d %d %d\n", i, j, k);

	i = 7; j = 8; k = 9;
	printf("%d, ", i - 7 && j++ < k);
	printf("%d %d %d\n", i, j, k);

	i = 7; j = 8; k = 9;
	printf("%d, ", (i = j) || (j = k));
	printf("%d %d %d\n", i, j, k);

	i = 1; j = 1; k = 1;
	printf("%d, ", ++i || ++j && ++k);
	printf("%d %d %d\n", i, j, k);


}

// Short -1, 0, 1 return
void ex_04(void) {
	int i = 5, j = 5;
	printf("%d", (i > j) - (i < j));
}

void ex_05(void) {
	int n = -5;
	if (n >= 1 <= 10)
		printf("n is between 1 and 10\n");
}

void ex_06(void) {
	int n = -9;
	if (n == 1-10)
		printf("n is between 1 and 10\n");
}

void ex_07(void) {
	int i = -17;
	printf("%d\n", i >= 0 ? i : -i);
}

void ex_08(void) {
	int age = 22;
	bool teenager = (age >= 13 && age <= 19);
	printf("Folk of age %d is teenager: %d", age, teenager);
}

void ex_09(void) {
	// they seems both equivalent to me
}

void ex_10(void) {
	int i = 1;
	switch (i % 3) {
		case 0: printf("zero");
		case 1: printf("one");
		case 2: printf("two");
	}
}

void ex_11(void) {
	int area_code = 404;

	switch (area_code) {
		case 229:
			printf("Albany");
			break;
		case 404: case 470: case 678: case 770:
			printf("Atlanta");
			break;
		case 478:
			printf("Macon");
			break;
		case 706: case 762:
			printf("Columbus");
			break;
		case 912:
			printf("Savannah");
			break;
		default:
			printf("Area code not recognized");
	}
}

/* PROJECTS */
void pr_01(void) {
	int n, digits = 0;

	printf("Enter a number: ");
	scanf("%d", &n);
	printf("The number %d has ", n);

	if (n > 0)
		digits++;
	if (n > 9)
		digits++;
	if (n > 99)
		digits++;
	if (n > 999)
		digits++;

	printf("%d digits.", digits);
}

// Convert 24h date to 12h
void pr_02(void) {
	int hh, mm;
	bool flag;

	printf("Enter a 24-hour time: ");
	scanf("%2d:%2d", &hh, &mm);

	flag = hh / 12;
	hh %= 12;

	printf("Equivalent 12-hour time: %.2d:%.2d ", hh, mm);

	if (flag)
		printf("PM");
	else
		printf("AM");
}

// Broker modified
void pr_03(void) {
	float commision,  pricePerShare, value;
	int shares;

	printf("Enter number shares: ");
	scanf("%d", &shares);
	printf("Enter price per share: ");
	scanf("%f", &pricePerShare);

	value = (float)shares * pricePerShare;

	if (value < 2500.00f)
		commision = 30.00f + .017f * value;
	else if (value < 6250.00f)
		commision = 56.00f + .0066f * value;
	else if (value < 20000.00f)
		commision = 76.00f + .0034f * value;
	else if (value < 50000.00f)
		commision = 100.00f + .0022f * value;
	else if (value < 500000.00f)
		commision = 155.00f + .0011f * value;
	else
		commision = 255.00f + .0009f * value;

	if (commision < 39.00f)
		commision = 39.00f;

	printf("\nCommission of broker #1: $%.2f\n", commision);


	if (shares < 2000)
		commision = 33.00f + .03f * shares;
	else
		commision = 33.00f + .02f * shares;

	printf("Commission of broker #2: $%.2f\n", commision);
}

// Beaufort scale
void pr_04(void) {
	int speed;

	printf("Enter wind speed in knots: ");
	scanf("%d", &speed);

	if (speed < 1)
		printf("Calm\n");
	else if (speed <= 3)
		printf("Light air\n");
	else if (speed <= 27)
		printf("Breeze\n");
	else if (speed <= 47)
		printf("Gale\n");
	else if (speed <= 63)
		printf("Storm\n");
	else
		printf("Hurricane\n");
}

// Tax
void pr_05(void) {
	float income, tax;

	printf("Enter income: ");
	scanf("%f", &income);

	if (income <= 750.0f)
		tax = income * .01f;
	else if (income <= 2250.0f)
		tax = income * .02f + 7.50f;
	else if (income <= 3750.0f)
		tax = income * .03f + 37.50f;
	else if (income <= 5250.0f)
		tax = income * .04f + 82.50f;
	else if (income <= 7000.0f)
		tax = income * .05f + 142.50f;
	else
		tax = income * .06f + 230.00f;

	printf("Tax due is: %.2f", tax);
}

// upc modified
void pr_06(void) {
	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
		first_sum, second_sum, total, check_digit;

	printf("Enter the first (single) digit: ");
	scanf("%1d", &d);
	printf("Enter first group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
	printf("Enter second group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
	printf("Enter the last (single) digit: ");
	scanf("%1d", &check_digit);

	first_sum = d + i2 + i4 + j1 + j3 + j5;
	second_sum = i1 + i3 + i5 + j2 + j4;
	total = 3 * first_sum + second_sum;

	if (check_digit == (9 - ((total - 1) % 10)))
	    printf("VALID\n");
	  else
	    printf("NOT VALID\n");
}

// Smallest and largest out of 4 numbers
void pr_07(void) {
	int i1, i2, i3, i4, smal1, smal2, larg1, larg2;

	printf("Enter four integers: ");
	scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

	if (i1 < i2) {
		smal1 = i1;
		larg1 = i2;
	}
	else {
		smal1 = i2;
		larg1 = i1;
	}

	if (i3 < i4) {
		smal2 = i3;
		larg2 = i4;
	}
	else {
		smal2 = i4;
		larg2 = i3;
	}

	printf("Smallest: %d\n", (smal1 < smal2) ? smal1 : smal2);
	printf("Largest: %d\n", (larg1 > larg2) ? larg1 : larg2);

}

// Flight departures
void pr_08(void) {
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

}

// Which date is sooner
void pr_09(void) {
	int d1, d2, m1, m2, y1, y2, daysFromBeginning1, daysFromBeginning2;

	printf("Enter first date: ");
	scanf("%d/%d/%d", &d1, &m1, &y1);
	printf("Enter second date: ");
	scanf("%d/%d/%d", &d2, &m2, &y2);

	daysFromBeginning1 = d1 + 30 * m1 + 365 * y1;
	daysFromBeginning2 = d2 + 30 * m2 + 365 * y2;

	if (daysFromBeginning1 < daysFromBeginning2)
		printf("%d/%d/%d is earlier than %d/%d/%d", d1, m1, y1, d2, m2, y2);
	else
		printf("%d/%d/%d is earlier than %d/%d/%d", d2, m2, y2, d1, m1, y1);
}

// Grades
void pr_10(void) {
	int grade;

	printf("Enter numerical grade: ");
	scanf("%d", &grade);

	if (grade < 0 || grade > 100)
		printf("Illegal grade!\n");

	printf("Letter grade: ");
	switch (grade / 10) {
	case 9:
		printf("A");
		break;
	case 8:
		printf("B");
		break;
	case 7:
		printf("C");
		break;
	case 6:
		printf("D");
		break;
	case 5:
		printf("E");
		break;
	default:
		printf("FX");
		break;
	}
}

void pr_11(void) {
	int tens, ones;

	printf("Enter a two-digit number: ");
	scanf("%1d%1d", &tens, &ones);

	printf("You entered the number ");
	if (tens == 1) {
		switch(ones) {
			case 1:
				printf("eleven"); break;
			case 2:
				printf("twelve"); break;
			case 3:
				printf("thirteen"); break;
			case 4:
				printf("fourteen"); break;
			case 5:
				printf("fifteen"); break;
			case 6:
				printf("sixteen"); break;
			case 7:
				printf("seventeen"); break;
			case 8:
				printf("eighteen"); break;
			case 9:
				printf("nineteen"); break;
		}
	}
	else {
		switch(tens) {
			case 2:
				printf("twenty"); break;
			case 3:
				printf("thirty"); break;
			case 4:
				printf("forty"); break;
			case 5:
				printf("fifty"); break;
			case 6:
				printf("seventy"); break;
			case 7:
				printf("seventy"); break;
			case 8:
				printf("eighty"); break;
			case 9:
				printf("ninety"); break;
		}
		printf("-");
		switch(ones) {
			case 1:
				printf("one"); break;
			case 2:
				printf("two"); break;
			case 3:
				printf("three"); break;
			case 4:
				printf("four"); break;
			case 5:
				printf("five"); break;
			case 6:
				printf("six"); break;
			case 7:
				printf("seven"); break;
			case 8:
				printf("eight"); break;
			case 9:
				printf("nine"); break;
		}
	}
	printf(".");
}
