/*
 * line.h
 *
 *  Created on: Jun 13, 2013
 *      Author: delmadord
 */

#ifndef LINE_H_
#define LINE_H_

#define MAX_LINE_LEN 60

// Clears the current line
void clear_line(void);

// Adds word to the end of the curent line
// If not the first word of the line, puts one space before
void add_word(const char *word);

// Returns number of characters left in the current line
int space_remainig(void);

// writes current line with justification
void write_line(void);

// Writes the current line without justification
// If the line is empty, does nothing
void flush_line(void);


#endif /* LINE_H_ */
