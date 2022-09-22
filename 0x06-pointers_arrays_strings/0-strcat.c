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
	int dest_lenx = 0, src_leny = 0, i = 0;

	while (dest[dest_lenx] != '\0')
	{
		dest_lenx++;
	}

	while (src[src_leny] != '\0')
	{
		src_leny++;
	}

	while (src_leny)
	{
		dest[dest_lenx] = src[src_leny];
		src_leny--;
		i++;
		dest_lenx++;
	}
	dest[dest_lenx] = '\0';

	return (dest);
}
