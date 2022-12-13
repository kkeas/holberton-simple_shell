#include "shell.h"

/**
 * main - main function
 * @ac: arg count
 * @av: arg vector
 * Return: 1
 */

int main(int ac __attribute__((unused)), char *av[])
{
	int ret_status = EXIT_SUCCESS;
	char *line = NULL;
	char **array;
	size_t n = 0;
	int count = 1;

	while (1)
	{
		signal(SIGINT, manage_signal);  /* sends si to process if running*/
		if (isatty(STDIN_FILENO))  /** checks to see if file descriptor is stdin */
			prompt();
		if (getline(&line, &n, stdin) == EOF) /* reads lines from stdin */
			break;
		array = strsplit(line, " \n\t");  /* tokenizes the line*/
		if (array == NULL || array[0] == NULL)
		{
			free(array);
			ret_status = EXIT_FAILURE;
			count++;
			continue;
		}
		if (_strcmp(array[0], "exit") == 0)
			ret_status = exitfunc(array, av, line, count, ret_status);
		if (_strcmp(array[0], "env") == 0)
		{
			ret_status = print_env();
			free(array);
			count++;

			continue;
		}
		ret_status = child(array, av, count);
		free(array);
		array = NULL;
		fflush(stdin);
		count++;
	}
	free(line);
	return (ret_status);
}
