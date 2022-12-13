#include "shell.h"
/**
 *exitfunc - function that exits program
 *@array: array of command
 *@av: argument vector of main
 *@line: getline buffer to free
 *@count: execution count
 *@ret_status: last status to exit
 *Return: status
 */
int exitfunc(char **array, char *av[], char *line, int count, int ret_status)
{
	int i = 0, exit_status, num;

	while (array[i] != NULL)
	{
		i++;
	}
	if (i == 1)
	{
		free(array);
		free(line);
		exit(ret_status);
	}
	if (i >= 2)
	{
		for (i = 0; array[1][i] != '\0'; i++)
		{
			num = _isdigit(array[1][i]);
			if (num == 0)
			{
				print_errors(array, av, count, 2);
				ret_status = 2;
				return (ret_status);
			}
		}
		exit_status = _atoi(array[1]);
		free(array);
		free(line);
		exit(exit_status);
	}

	return (ret_status);
}
