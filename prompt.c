#include "shell.h"
#include <stdio.h>
#include <stdlib.h>

void prompt(void)
{
	char *buffer = malloc(1024);
	size_t len = 1024;

	while (1)
	{
		printf("$ ");
		getline(&buffer, &len, stdin);
	}
	return (0);
}	
