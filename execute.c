#include "shell.h"

/**
 * execute_instruct - creates process id
 * Return: Always 0
 */
void execute_instruct(const char *instruct)
{
	pid_t c_pid = fork();

	if (c_pid == -1)
	{
		group_print("Error, try again later. \n");
		exit(EXIT_FAILURE);
	}
	else if (c_pid == 0)
	{
		char *args[128];
		int arg_count = 0;
		char *token = strtok((char *)instruct, " ");
		while (token != NULL)
		{
			args[arg_count++] = token;
			token = strtok(NULL, " ");
		}
		args[arg_count] = NULL;
		execvp(args[0], args);
		group_print(" Error executing command.\n");
		exit(EXIT_FAILURE);
	}
	else

	{
		wait(NULL);
	}
}
