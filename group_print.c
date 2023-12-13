#include "shell.h"
/**
 * group_print - gives the output
 * @s: value of character
 */

void group_print(const char *s)
{
	write(STDOUT_FILENO, s, strlen(s));
}
