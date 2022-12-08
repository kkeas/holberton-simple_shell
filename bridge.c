#include "shell.h"

/**
 *_strlen - prints the length of a string
 *@s: the string
 *Return: the length of the string
 **/

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
		return (i);
}
#include "shell.h"

/**
 *  **_strcpy - copy the string
 *   *@dest: char type string
 *    *@src: char type string
 *     *Return: pointer to dest
 *      */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
#include "shell.h"

/**
 *  *_strcat - function to concatenate two strings
 *   *@dest: the string to concatenate to
 *    *@src: the string to add
 *     *Return: dest
 *      */

char *_strcat(char *dest, char *src)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
		;
	for (y = 0; src[y] != '\0'; y++)
	{
		dest[x] = src[y];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
#include "shell.h"

/**
 *  *_strcmp - compare two strings
 *   *@s1: string
 *    *@s2: string
 *     *Return: negative if s1 < s2, 0 if equal, and positive if s1 > s2
 *      */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	}
	return (0);
}
