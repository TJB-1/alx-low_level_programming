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

	while (dest[x] != '\0')
	{
		++x;
	}
	for (y = 0; src[y] != '\0'; y++)
	{
		dest[x] = src[y];
		y++;
	}
	dest[x] = '\0';

	return (dest);
}
