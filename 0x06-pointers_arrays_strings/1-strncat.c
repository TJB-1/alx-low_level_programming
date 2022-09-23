#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: an input string
 * @src: an input string
 * @n: an integer
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;
	/*offset for destination and source*/
	while (dest[x++])
	{
		y++;
	}
	/*copy byte from src*/
	for (x = 0; src[x]; x++)
	{
		if (x < n)
			dest[y++] = src[x];
	}
	/*setting nul terminator*/
	dest[y] = '\0';
	/*Returning pointer to resulting string destination*/
	return (dest);
}
