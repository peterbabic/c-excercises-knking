/*
 * ex_19.c
 *
 *  Created on: Jun 20, 2013
 *      Author: delmadord
 */

#include <stdio.h>
#include <string.h>

#define COUNT(x) ((int) (sizeof(x) / sizeof(x[0])))

void new_cmd(void);
void open_cmd(void);
void close_cmd(void);
void close_all_cmd(void);
void save_cmd(void);
void save_as_cmd(void);
void save_all_cmd(void);
void print_cmd(void);
void exit_cmd(void);

struct {
	char *cmd_name;
	void (*cmd_pointer)(void);
} file_cmd[] = {
	{"new",			new_cmd},
	{"open",		open_cmd},
	{"close",		close_cmd},
	{"close_all", 	close_all_cmd},
	{"save",		save_cmd},
	{"save as",		save_as_cmd},
	{"save_all",	save_all_cmd},
	{"print",		print_cmd},
	{"exit",		exit_cmd}
};

int main(void) {
	char user_cmd[15];
	printf("Enter command: ");
	scanf("%s", user_cmd);

	int i;
	for (i = 0; i < COUNT(file_cmd); i++)
		if (strcmp(file_cmd[i].cmd_name, user_cmd) == 0) {
			printf("command found: ");
			file_cmd[i].cmd_pointer();
			return 0;
		}

	printf("command not found");
	return 0;
}

void new_cmd(void) {
	printf("new");
}

void open_cmd(void) {
	printf("open");
}

void close_cmd(void) {
	printf("close");
}

void close_all_cmd(void) {
	printf("close all");
}

void save_cmd(void) {
	printf("save");
}

void save_as_cmd(void) {
	printf("save as");
}

void save_all_cmd(void) {
	printf("save all");
}

void print_cmd(void) {
	printf("print");
}

void exit_cmd(void) {
	printf("exit");
}

