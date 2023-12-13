#include "shell.h"
/**
 * main - holds the functions in use
 * Return: Always 0
 */

int main(void)
{
	char instruct[120];

	while (1)
	{
		group_print("group shell $");
		read_instruct(instruct, sizeof(instruct));
		execute_instruct(instruct);
	}

	return (0);
}
