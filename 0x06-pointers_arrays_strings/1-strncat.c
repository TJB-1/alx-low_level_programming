#include "main.h"

/**
 * _strncat - copy characters from src to dest
 * @dest: destination
 * @src: source
 * @n: number of characters to concatinate
 *
 * Return:pointer to concatinated dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
	{
		dest_len++;
	}

	for (i = 0; src[i]; i++)
	{
		if (i < n)
			dest[dest_len++] = src[i];
	}
	dest[dest_len] = '\0';

	return (dest);
}
