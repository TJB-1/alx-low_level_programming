#include "main.h"

/**
 * _strcat : concatenates two strings
 * @dest: Destination String
 * @src: Source String
 * Return: A pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[j]  != '\n' && src[i] != '\n')
	{
		dest[i] = src[i];
		i++;
		j++;
	}
	return (dest);
}
