#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

#define N 10

#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

#define NUM_SUITS 4
#define NUM_RANKS 13

#define SIZE ((int) (sizeof(a) / sizeof(a[0])))

#define FIBONACCI_LENGHT 40

#define MAX_LENGHT 255

#define NUM_QUIZZES  5
#define NUM_STUDENTS 5

#define MAP_WIDTH 10
#define MAP_HEIGHT 10

void reverse(void);
void repdigit(void);
void deal(void);
void interest(void);
void reverse2(void);
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
void ex_11(void);
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
void pr_12(void);
void pr_13(void);
void pr_14(void);
void pr_15(void);
void pr_16(void);
void pr_17(void);

int main(void) {
//	interest();

//	ex_11();

	pr_17();


	return (0);
}


// Reverses a series of number
void reverse(void) {
	int a[N], i;

	printf("Enter %d numbers: ", N);
	for (i = 0; i < SIZE; i++)
		scanf("%d", &a[i]);

	printf("In reverse order: ");
	for (i = SIZE - 1; i >= 0; i--)
		printf(" %d", a[i]);
	printf("\n");
}

void interest(void) {
	int i, low_rate, num_years, year;
	double value[5];

	printf("Enter interest rate: ");
	scanf("%d", &low_rate);
	printf("Enter number of years: ");
	scanf("%d", &num_years);

	printf("\nYears: ");
	for (i = 0; i < NUM_RATES; i++) {
		printf("%6d%%", low_rate + i);
		value[i] = INITIAL_BALANCE;
	}
	printf("\n");

	for (year = 1; year <= num_years; year++) {
		printf("%3d    ", year);
		for (i = 0; i < NUM_RATES; i++) {
			value[i] += (low_rate + i) / 100.0 * value[i];
			printf("%7.2f", value[i]);
		}
		printf("\n");
	}
}

void repdigit(void) {
	bool digit_seen[10] = {false};
	int digit;
	long n;

	printf("Enter number: ");
	scanf("%ld", &n);

	while (n > 0) {
		digit = n % 10;
		if (digit_seen[digit])
			break;
		digit_seen[digit] = true;
		n /= 10;
	}

	if (n > 0)
		printf("Repeated digit\n");
	else
		printf("No repeated digit\n");
}

void deal(void) {
    bool in_hand[NUM_SUITS][NUM_RANKS] = {false};
    int num_cards, rank, suit;
    const char rank_code[] = {'2', '3', '4', '5', '6', '7', '8', '9', 'n', 'v', 'd', 'k', 'e'};
    const char suit_code[] = {'G', 'P', 'T', 'L'};

    srand((unsigned) time(NULL));

    printf("ENter number of cards: ");
    scanf("%d", &num_cards);

    printf("In hand: ");
    while (num_cards > 0) {
        suit = rand() % NUM_SUITS;
        rank = rand() % NUM_RANKS;
        if (!in_hand[suit][rank]) {
            in_hand[suit][rank] = true;
            num_cards--;
            printf(" %c%c", rank_code[rank], suit_code[suit]);
        }
    }
    printf("\n");

}

void reverse2(void) {
    int i, n;

    printf("How many numbers you want to reverse?: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d numbers: ", n);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &a[i]);
    }

    printf("In reverse order: ");
    for (i = n - 1; i >= 0; i--) {
        printf(" %d", a[i]);
    }
    printf("\n");
}

// EXERCISES //
void ex_01(void) {
//	The problem with sizeof(a) / sizeof(t) is that it can't easily be checked
//	for correctness by someone reading the program. (The reader would have to
//	locate the declaration of a and make sure that its elements have type t.)
}

void ex_02(void) {
	int digit = 5, array[digit - '0'];
}

void ex_03(void) {
	bool wekend[7] = {1, 0, 0, 0, 0, 0, 1};
}

void ex_04(void) {
	bool wekend[7] = {[0] = 1, [6] = 1};
}

// Fibonacci numbers
void ex_05(void) {
	int i, fib_numbers[FIBONACCI_LENGHT] = {[1] = 1};

	printf("First %d Fibonacci numbers are: \n0, 1, ", FIBONACCI_LENGHT);
	for (i = 2; i < FIBONACCI_LENGHT; i++) {
		fib_numbers[i] = fib_numbers[i - 2] + fib_numbers[i - 1];
		printf("%d, ", fib_numbers[i]);
	}
}

// 7-segment display array initializer
void ex_06(void) {
	const int segments[10][7] = {
			{1, 1, 1, 1, 1, 1, 0},
			{0, 1, 1, 0, 0, 0, 0},
			{1, 1, 0, 1, 1, 0, 1},
			{1, 1, 1, 1, 0, 0, 1},
			{0, 1, 1, 0, 0, 1, 1},
			{1, 0, 1, 1, 0, 1, 1},
			{1, 0, 1, 1, 1, 1, 1},
			{1, 1, 1, 0, 0, 0, 0},
			{1, 1, 1, 1, 1, 1, 1},
			{1, 1, 1, 1, 0, 1, 1}
	};
}

// 7-segment display array initializer shrinked
void ex_07(void) {
	const int segments[10][7] = {
			{1, 1, 1, 1, 1, 1},
			{0, 1, 1, 0, 0, 0, 0},
			{1, 1, 0, 1, 1, 0, 1},
			{1, 1, 1, 1, 0, 0, 1},
			{0, 1, 1, 0, 0, 1, 1},
			{1, 0, 1, 1, 0, 1, 1},
			{1, 0, 1, 1, 1, 1, 1},
			{1, 1, 1},
			{1, 1, 1, 1, 1, 1, 1},
			{1, 1, 1, 1, 0, 1, 1}
	};
}

void ex_08(void) {
	float temperature_readings[30][24];
}

// Average temperature
void ex_09(void) {
	float avg, sum_hours = 0, sum_days = 0, temperature_readings[30][24];
	int i, j;

	for (i = 0; i < 30; i++) {
		for (j = 0; j < 24; j++) {
			sum_hours += temperature_readings[i][j];
		}
		sum_days += sum_hours / 24;
	}
	avg = sum_days / 30;
}

// CHess board
void ex_10(void) {
	char chess_board[8][8] = {
			{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
			{'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
			{' ', '.', ' ', '.', ' ', '.', ' ', '.'},
			{'.', ' ', '.', ' ', '.', ' ', '.', ' '},
			{' ', '.', ' ', '.', ' ', '.', ' ', '.'},
			{'.', ' ', '.', ' ', '.', ' ', '.', ' '},
			{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
			{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
	};
}

// Checker board
void ex_11(void) {
	char checker_board[8][8];
	int i, j;

	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) {
			checker_board[i][j] = (i + j) % 2 == 0 ? 'B' : 'R';
			printf("%c ", checker_board[i][j]);
		}
		printf("\n");
	}
}

// PROJECTS //
// repdigit modified
void pr_01(void) {
	bool digit_seen[10] = {false};
	int digit, i;
	long n;

	printf("Enter number: ");
	scanf("%ld", &n);

	while (n > 0) {
		digit = n % 10;
		if (digit_seen[digit])
			break;
		digit_seen[digit] = true;
		n /= 10;
	}

	if (n > 0) {
		printf("Repeated digit(s): ");
		for (i = 0; i < 10; i++)
			if (digit_seen[i])
				printf("%d ", i);
	}
	else
		printf("No repeated digit\n");
}

// repdigit modified again
void pr_02(void) {
	short digit_seen[10] = {0};
	int digit, i;
	long n;

	printf("Enter number: ");
	scanf("%ld", &n);

	while (n > 0) {
		digit = n % 10;
		digit_seen[digit]++;
		n /= 10;
	}

	printf("Digit:\t\t ");
	for (i = 0; i < 10; i++)
		printf("%3d", i);

	printf("\nOccurences:\t ");
	for (i = 0; i < 10; i++)
		printf("%3d", digit_seen[i]);
}

// repdigit modified again
void pr_03(void) {
	short i, digit_seen[10] = {false};
	long n;

	while (1) {
		printf("Enter number: ");
		scanf("%ld", &n);

//		0 terminates
		if (n == 0)
			break;

		while (n > 0) {
			digit_seen[n % 10]++;
			n /= 10;
		}

		printf("Digit:\t\t ");
		for (i = 0; i < 10; i++)
			printf("%3d", i);

		printf("\nOccurences:\t ");
		for (i = 0; i < 10; i++)
			printf("%3d", digit_seen[i]);

		printf("\n\n");

//		Reset the array
		for (i = 0; i < 10; i++)
			digit_seen[i] = false;
	}
}

// reverse modified
void pr_04(void) {
	int a[N], i;

	printf("Enter %d numbers: ", N);
	for (i = 0; i < N; i++)
		scanf("%d", &a[i]);

	printf("In reverse order: ");
	for (i = N - 1; i >= 0; i--)
		printf(" %d", a[i]);
	printf("\n");
}

// Interest modified
void pr_05(void) {
	int i, j, low_rate, num_years, year;
	double value[5];

	printf("Enter interest rate: ");
	scanf("%d", &low_rate);
	printf("Enter number of years: ");
	scanf("%d", &num_years);

	printf("\nYears: ");
	for (i = 0; i < NUM_RATES; i++) {
		printf("%6d%%", low_rate + i);
		value[i] = INITIAL_BALANCE;
	}
	printf("\n");

	for (year = 1; year <= num_years; year++) {
		printf("%3d    ", year);
		for (i = 0; i < NUM_RATES; i++) {
			for (j = 0; j < 12; j++)
				value[i] += (low_rate + i) / 100.0 * value[i];
			printf("%7.2f", value[i]);
		}
		printf("\n");
	}
}

void pr_06(void) {
	char a[MAX_LENGHT], ch;
	int i, j = 0, r;

	printf("Enter message: ");
	while (1) {
		if ((a[j] = getchar()) == '\n')
			break;
		j++;
	}

	printf("In B1FF-speak: ");
	for (i = 0; i < j; i++) {
		a[i] = toupper(a[i]);
		switch (a[i]) {
		case 'A':
			a[i] = '4'; break;
		case 'B':
			a[i] = '8'; break;
		case 'E':
			a[i] = '3'; break;
		case 'I':
			a[i] = '1'; break;
		case 'O':
			a[i] = '0'; break;
		case 'S':
			a[i] = '5'; break;
		}
		printf("%c", a[i]);
	}

//	Get some random number bw 8 and 12
    srand((unsigned) time(NULL));
    r = (rand() % 5) + 8;
	for (i = 0; i < r; i++)
		printf("!");
}


// 5x5 matrix sum calculator
void pr_07(void) {
	int i, j, sum, matrix[5][5];

	for (i = 0; i < 5; i++) {
		printf("Enter row %d: ", i + 1);
		scanf("%d %d %d %d %d", &matrix[i][0], &matrix[i][1],
				&matrix[i][2], &matrix[i][3], &matrix[i][4]);
	}

	printf("\nRow totals: ");
	for (i = 0; i < 5; i++) {
		sum = 0;
		for (j = 0; j < 5; j++)
			sum += matrix[i][j];
		printf("%d ", sum);
	}

	printf("\nColumn totals: ");
	for (i = 0; i < 5; i++) {
		sum = 0;
		for (j = 0; j < 5; j++)
			sum += matrix[j][i];
		printf("%d ", sum);
	}

}

//5x5 matrix sum calculator student/ quizes
void pr_08(void) {

	int grades[NUM_STUDENTS][NUM_QUIZZES];
	int high, low, quiz, student, total;

	for (student = 0; student < NUM_STUDENTS; student++) {
		printf("Enter grades for student %d: ", student + 1);
		for (quiz = 0; quiz < NUM_QUIZZES; quiz++)
			scanf("%d", &grades[student][quiz]);
	}

	printf("\nStudent  Total  Average\n");
	for (student = 0; student < NUM_STUDENTS; student++) {
		printf("%4d      ", student + 1);
		total = 0;
		for (quiz = 0; quiz < NUM_QUIZZES; quiz++)
			total += grades[student][quiz];
		printf("%3d     %3d\n", total, total / NUM_QUIZZES);
	}

	printf("\nQuiz  Average  High  Low\n");
	for (quiz = 0; quiz < NUM_QUIZZES; quiz++) {
		printf("%3d     ", quiz + 1);
		total = 0;
		high = 0;
		low = 100;
		for (student = 0; student < NUM_STUDENTS; student++) {
			total += grades[student][quiz];
			if (grades[student][quiz] > high)
				high = grades[student][quiz];
			if (grades[student][quiz] < low)
				low = grades[student][quiz];
		}
		printf("%3d    %3d   %3d\n", total / NUM_STUDENTS, high, low);
	}

}

// Map walk
void pr_09(void) {
	char ch, map[MAP_WIDTH][MAP_HEIGHT] = {{0}};
	int  i, x, y, direction;
	bool usedDirection[4] = {false};

	srand((unsigned) time(NULL));

	x = 0;
	y = 0;
	//	map[x][y] = ch;
	//	65 is 'A', 90 is 'Z'
	for (ch = 'A'; ch <= 'Z'; ch++) {
		map[x][y] = ch;

//		Reset directions
		for (i = 0; i < 4; i++)
			usedDirection[i] = false;

		while (1) {
			direction = (rand() % 4);
			usedDirection[direction] = true;

			if(direction == 0 && (y + 1) < MAP_HEIGHT && !map[x][y + 1])
				break;
			if(direction == 1 && (x + 1) < MAP_WIDTH && !map[x + 1][y])
				break;
			if(direction == 2 && (y - 1) >= 0 && !map[x][y - 1])
				break;
			if(direction == 3 && (x - 1) >= 0 && !map[x - 1][y])
				break;

//			ALl directions are used and we still dont have a path
			if (usedDirection[0] && usedDirection[1] &&
					usedDirection[2] && usedDirection[3])
				goto terminate;

		}

		switch (direction) {
		case 0:
			y++;
			break;
		case 1:
			x++;
			break;
		case 2:
			y--;
			break;
		case 3:
			x--;
			break;
		}

	}

	terminate:
	for (y = 0; y < MAP_WIDTH; y++) {
		for (x = 0; x < MAP_WIDTH; x++) {
			if (map[x][y])
				printf("%c ", map[x][y]);
			else
				printf(". ");
		}
		printf("\n");
	}
}

// Departure times modified
void pr_10(void) {
	int i, hh, mm, entered, closestToken = 0,
		closestDistance, distance;

	int a[] = {480, 583, 679, 767, 840, 945, 1140, 1305};
	int departure[] = {616, 712, 811, 900, 968, 1075, 1280, 1438};

	printf("Enter a 24-hour time: ");
	scanf("%2d:%2d", &hh, &mm);

	entered = hh * 60 + mm;
//	60 min * 24 hour
	distance = 1440;
	for (i = 0; i < SIZE; i++) {
		distance = abs(a[i] - entered);
		if (distance < closestDistance) {
			closestDistance = distance;
			closestToken = i;
		}
	}

	printf("Closest departure time is %2d:%.2d., arriving at %2d:%.2d.",
			a[closestToken] / 60, a[closestToken] % 60,
			departure[closestToken] / 60, departure[closestToken] / 60);

}

// Phone text number to digits
void pr_11(void) {
	char ch, number[15];
	int i;

	printf("Enter phone number: ");
	for (i = 0; i < 15 && (ch = getchar()) != '\n'; i++)
		number[i] = ch;

	printf("In numeric form: ");
	for (i = 0; i < 15; i++) {
		switch (number[i]) {
		case 'A': case 'B': case 'C':
			printf("%d", 2); break;
		case 'D': case 'E': case 'F':
			printf("%d", 3); break;
		case 'G': case 'H': case 'I':
			printf("%d", 4); break;
		case 'J': case 'K': case 'L':
			printf("%d", 5); break;
		case 'M': case 'N': case 'O':
			printf("%d", 6); break;
		case 'P': case 'Q': case 'R': case 'S':
			printf("%d", 7); break;
		case 'T': case 'U': case 'V':
			printf("%d", 8); break;
		case 'W': case 'X': case 'Y': case 'Z':
			printf("%d", 9); break;
		default:
			printf("%c", number[i]); break;
		}
	}
}

// Scrabble modified
void pr_12(void) {
	int sum = 0;
	char ch;
	const char score[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, // L
			3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 3, 8, 4, 10};

	printf("Enter a word: ");

	while ((ch = getchar()) != '\n') {
		ch = toupper(ch);
		sum += score[ch - 65];
	}

	printf("Scrabble value: %d\n", sum);
}

// Name input modified
void pr_13(void) {
	char first, temp, surname[20];
	int i, j;

	printf("Enter a first and last name: ");
//	find first nonblank character
	while ((first = getchar()) == ' ')
		;
//	skip spaces
	while (getchar() != ' ')
		;
//	find first nonblank character
	while ((surname[0] = getchar()) == ' ')
		;

	for (i = 1; i < 20; i++) {
		temp = getchar();
		if (temp == ' ' || temp == '\n')
			break;
		surname[i] = temp;
	}

	printf("You entered the name: ");
	for (j = 0; j < i; j++) {
		printf("%c", surname[j]);
	}

	printf(", %c.", first);
}

// Reverse words in sentence
void pr_14(void) {
	char ch, sentence[50], terminating;
	int i, j, k;

	printf("Enter a sentence: ");
	i = 0;

//	Insert words into array
	ch = getchar();
	while (ch != '.' && ch != '!' && ch != '?') {
		sentence[i++] = ch;
		ch = getchar();
	}
//	Terminating character into separate one
	terminating = ch;

	printf("Reversal of sentence:");
//	Some fancy algorithms going back and forth over the words
	for (j = i - 1; j >=0; j--) {
		if (sentence[j - 1] != ' ' && j > 0)
			continue;
		putchar(' ');
		for (k = j; k < i; k++) {
			putchar(sentence[k]);
		}
		i = j - 1;
	}
	putchar(terminating);

}

// Caesar cipher
void pr_15(void) {
	char ch, message[80];
	short i, shift;

	printf("Enter message to be encrypted: ");
	i = 0;
	while ((ch = getchar()) != '\n')
		message[i++] = ch;

	printf("Enter shift amount: ");
	while ((ch = getchar()) != '\n')
		shift = shift * 10 + ch - '0';

	printf("Encrypted message: ");
	for (i = 0; i < 80; i++) {
		if (message[i] >= 'A' && message[i] <= 'Z')
			putchar(((message[i] - 'A') + shift) %26 + 'A');
		else if (message[i] >= 'a' && message[i] <= 'z')
			putchar(((message[i] - 'a') + shift) %26 + 'a');
		else
			putchar(message[i]);
	}

}

// Anagrams
void pr_16(void) {
	char ch, contain[26] = {0};
	short i;

	printf("Enter first word: ");
	i = 0;
	while ((ch = getchar()) != '\n') {
		if (isalpha(ch))
			contain[toupper(ch) - 'A']++;
		i++;
	}

	printf("Enter second word: ");
	i = 0;
	while ((ch = getchar()) != '\n') {
		if (isalpha(ch))
			contain[toupper(ch) - 'A']--;
		i++;
	}

	for (i = 0; i < 26; i++) {
		if (contain[i] != 0)
			break;
	}

	if (i == 26)
		printf("The words are anagrams.");
	else
		printf("The words are not anagrams.");
}

// Magic square generator
void pr_17(void) {
	short n = 0, r, c, i, prevr, prevc;

	printf("Magic square of specified size.\n");

	while (n % 2 != 1) {
		printf("Enter odd number between 1 and 99: ");
		scanf("%2hd", &n);
	}

	short square[n][n];
	for (r = 0; r < n; r++)
		for (c = 0; c < n; c++)
			square[r][c] = 0;

//	Put 1 into first row, middle column
	r = prevr = 0;
	c = prevc = n / 2;
	i = 1;
	do {
//		Wrap over row
		if (r == -1)
			r = n - 1;
//		Wrap over column
		if (c == n)
			c = 0;
//		If element already occupied, put new right below previous placed
		if (square[r][c] != 0) {
			r = prevr + 1;
			c = prevc;
		}
		prevr = r;
		prevc = c;
//		Move one row up and to to the next column
		square[r--][c++] = i++;
	} while (i <= (n * n));

	for (r = 0; r < n; r++) {
		for (c = 0; c < n; c++) {
			printf("%4hd", square[r][c]);
		}
		printf("\n");
	}
}
