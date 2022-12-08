#include "shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int tokenize(char *buffer, int num_tokens)
{
	 *buffer = NULL;
	char *buffercopy = NULL;
	char * token;
	num_tokens = 0;

	buffercopy = malloc(sizeof(char) *buffer);

	if (buffercopy == NULL)
	{
		printf("memory allocation error");
		return (-1);
	}

	*token = strtok(*buffer, " ,\n");

	while (token != NULL)
	{
		num_tokens++;
		*token = strtok(NULL, " ,\n");
	}
	num_tokens++;
	return (0);
}



		
