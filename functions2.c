#include "shell.h"

/**
 *_strlen - prints the length of a string
 *@s: the string
 *Return: the length of the string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * _strdup - copys a string
 * @str: str to copy
 * Return: dup or null
 */

char *_strdup(const char *str)
{
	int i, size;
	char *dup;

	if (str == NULL)
		return (NULL);

	for (i = 0 ; str[i] ; i++)
	{
	}
	size = i;

	dup = malloc(sizeof(char) * (size + 1));

	if (dup == NULL)
		return (NULL);
	for (i = 0 ; i < size ; i++)
		dup[i] = str[i];
	dup[i] = '\0';

	return (dup);
}

/**
 * _atoi - converts string to int
 * @s: string
 * Return: int
 */

int _atoi(char *s)
{
	int min, id_i = 0, i = 0;
	unsigned int nu_i = 0;

	while (s[i])
	{
		if (s[i] == '-')
			min *= -1;

		while (s[i] >= '0' && s[i] <= '9')
		{
			id_i = 1;
			(nu_i = (nu_i * 10) + (s[i] - '0'));
			i++;
		}
		if (id_i == 1)
			break;

		i++;
	}

	nu_i *= min;
	return (nu_i);
}

/**
 * _isdigit  - checks if digit or not
 * @c: variable for dig
 * Return: 1
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * manage_signal - manage ctrl + c
 * @num_s: number for sig
 * Return: none
 */

void manage_signal(int num_s __attribute__((unused)))
{
	_putchar('\n');
	prompt();
}
