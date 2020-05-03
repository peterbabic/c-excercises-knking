/*
 * word.h
 *
 *  Created on: Jun 13, 2013
 *      Author: delmadord
 */

#ifndef WORD_H_
#define WORD_H_

#define MAX_WORD_LEN 20

// Reads the next word from the input
// Makes word empty, if exceeds OEF
// Truncates long words
// Returns number of characters stored
int read_word(char *word, int len);

#endif /* WORD_H_ */
