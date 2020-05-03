/*
 * justify.c
 *
 *  Created on: Jun 13, 2013
 *      Author: delmadord
 */

#include "line.h"
#include "word.h"



int main(void) {
	// additional spaces for * and \0
	char word[MAX_WORD_LEN + 2];
	int word_len;

	clear_line();
	while (1) {
		word_len = read_word(word, MAX_WORD_LEN + 1);
		if (word_len == 0) {
			flush_line();
			return 0;
		}
		if (word_len + 1 > space_remainig()) {
			write_line();
			clear_line();
		}
		add_word(word);
	}
}

