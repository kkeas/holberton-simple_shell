#include "shell.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int _prompt(int n, char **buffer)
{
	char *prompt = "$ ";
	 *buffer = malloc(1024);
       	n = 0;
	int readnchars;

	while (1)
	{
		printf("%s", prompt);
		readnchars = getline(&buffer, &n, stdin);
	}
	if (readnchars == -1)
	{
		printf("Exiting Shell....\n");
		return (-1);
	}
	return (n);
}
