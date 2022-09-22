#include <stdio.h>
#include "main.h"

/**
 * _strcat : concatenates two strings
 * @dest: Destination String
 * @src: Source String
 * Return: A pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int x, y;

	i = strlen(dest);

	for (y = 0; src[y] != '\0'; x++, y++)
	{
		dest[x] = src[y];
	}
	dest[x] = '\0';

	return (dest);
}
