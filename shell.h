#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

void group_print(const char *s);
void execute_instruct(const char *instruct);
void read_instruct(char *instruct, size_t sz);
#endif
