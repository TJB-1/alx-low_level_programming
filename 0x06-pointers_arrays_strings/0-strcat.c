#include <stdio.h>
#include "main.h"

/**
 * _strcat : appends @src to @dest  strings
 * overwriting  the terminating null byte (\0) at the end of dest
 * And adds a terminating null byte
 *
 * @dest: Destination String
 * @src: Source String
 * Return: A pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int x = 0, y = 0, i = 0;

	while (dest[x] != '\0')
	{
		x++;
	}

	while (src[y] != '\0')
	{
		y++;
	}

	while (y)
	{
		dest[x] = src[y];
		y--;
		i++;
		x++;
	}
	dest[x] = '\0';

	return (dest);
}
