#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: an input string
 * @src: an input string
 * @n: an integer
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	for (; n > x && src[x]; x++)
	{
		dest[x] = src[x];
	}
	for ( ; x < n; x++)
		dest[x] = '\0';
	return (dest);
}
