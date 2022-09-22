#include "main.h"
#include <string.h>
#include <stdio.h.>

/**
 * _strncpy - Copies a string
 * @dest: Destination String
 * @src: Source String
 * @n: integer
 * return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
