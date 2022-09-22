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
	int dest_lenx = 0, src_leny = 0;

	while (dest[dest_lenx++])
		dest_lenx++;

	for (dest_lenx = 0; src[dest_lenx]; dest_lenx++)
		dest[dest_lenx++] = src[dest_lenx];

	return (dest);
}
