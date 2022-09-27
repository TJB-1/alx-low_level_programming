#include "main.h"

/**
 * _memcpy - Copies n bytes from memory area src to dest
 * @dest: memory area to be copied to
 * @src: memory area to be copies from
 * @n: number of bytes to be copied
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	for ( ; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
