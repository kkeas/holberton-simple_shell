#include "shell.h"

int main(int ac, char **argv)
{
	char *buffer = NULL, *buffercopy = NULL;
	size_t len = 0;
	size_t readnchars;
	const char *delim = " \n";
	int num_tokens = 0;
	char *token;
	int i;

	(void)ac;

	while (1)
	{
		printf("$ ");
		readnchars = getline(&buffer, &len, stdin);

		if (readnchars == -1)
		{
			printf("Error\n");
			return (-1);
		}

	buffercopy = malloc(sizeof(char) * readnchars);
	if (buffercopy == NULL)
	{
		perror("memory allocation error");
		return (-1);
	}

	/*go back and use _strcpy from prev project*/
	strcpy(buffercopy, buffer);

	token = strtok(buffer, delim);

	while (token != NULL)
	{
		num_tokens++;
		token = strtok(NULL, delim);
	}
	num_tokens++;

	argv = malloc(sizeof(char *) * num_tokens);

	token = strtok(buffercopy, delim);

	for (i = 0; token != NULL; i++)
	{
		/*go back and use _strlen*/
		argv[i] = malloc(sizeof(char) * strlen(token));
		strcpy(argv[i], token);

		token = strtok(NULL, delim);
	}
	argv[i] = NULL;

	printf("%s\n", buffer);
	}
	free(buffer);
	return (0);
}
