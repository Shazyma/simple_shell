#include "shell.h"
/**
 * read_instruct - Gathers input
 * @instruct: value of input
 * @sz: size of characters
 */

void read_instruct(char *instruct, size_t sz)
{
	if (fgets(instruct, sz, stdin) == NULL)
	{
		if (feof(stdin))
		{
			group_print("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			group_print("Error.Kindly check on your input\n");
			exit(EXIT_FAILURE);
		}

	}
	instruct[strcspn(instruct, "\n")] = '\0';
}
