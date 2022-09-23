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
	/*y - srclen*/
	int x = 0, y = 0;
	char *temp = dest, *cpy = src;

	while (*src)
	{
		x++;
		src++;
	}
	y++;

	if (n > y)
		n = y;
	src = cpy;

	for (;x < n; x++)
		*dest++ = *src++;

	return (temp);
}
