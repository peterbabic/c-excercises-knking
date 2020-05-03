/*
 * pr_03.c
 *
 *  Created on: Jun 11, 2013
 *      Author: delmadord
 */
#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

#define NUM_SUITS 4
#define NUM_RANKS 13


int main(void) {
    bool in_hand[NUM_SUITS][NUM_RANKS] = {{false}};
    int num_cards, rank, suit;
    const char *rank_code[] = {"Two", "Three", "Four", "Five", "Six",
    	"Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King", "Ace"};
    const char *suit_code[] = {"spades", "hearts", "diamonds", "clubs"};

    srand((unsigned) time(NULL));

    printf("Enter number of cards: ");
    scanf("%d", &num_cards);

    printf("Your hand:\N");
    while (num_cards > 0) {
        suit = rand() % NUM_SUITS;
        rank = rand() % NUM_RANKS;
        if (!in_hand[suit][rank]) {
            in_hand[suit][rank] = true;
            num_cards--;
            // Capitalize
            printf("%s", rank_code[rank]);
            printf(" of ");
            printf("%s\n", suit_code[suit]);

        }
    }
    printf("\n");

	return 0;

}
