#include "shell.h"

int main(void)
{
	char *prompt = "$ ";
	char *fullcommand = NULL, *copycommand = NULL;
	size_t len = 0;
	ssize_t readnchars;
	const char *delim = " \n";
	char **argv;
	int num_tokens = 0;
	char *token;
	int i;

	readnchars = getline(&fullcommand, &len, stdin);

	while (1)
	{
		printf("%s", prompt);
		readnchars = getline(&fullcommand, &len, stdin);

		if (readnchars == -1)
		{
			printf("Exiting shell....\n");
			return (-1);
		}

	copycommand = malloc(sizeof(char) * readnchars);
	if (copycommand == NULL)
	{
		perror("memory allocation error");
		return (-1);
	}

	/*go back and use _strcpy from prev project*/
	strcpy(copycommand, fullcommand);

	token = strtok(fullcommand, delim);

	while (token != NULL)
	{
		num_tokens++;
		token = strtok(NULL, delim);
	}
	num_tokens++;

	argv = malloc(sizeof(char *) * num_tokens);

	token = strtok(copycommand, delim);

	for (i = 0; token != NULL; i++)
	{
		/*go back and use _strlen*/
		argv[i] = malloc(sizeof(char) * strlen(token));
		strcpy(argv[i], token);

		token = strtok(NULL, delim);
	}
	argv[i] = NULL;

	printf("%s\n", fullcommand);
	
	free(fullcommand);
	}
	return (0);
}
