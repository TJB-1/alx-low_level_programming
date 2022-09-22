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

	while (dest[j]  != '\n)
	{
		i++;
	}
	while (src[i] != '\n')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	return (dest);
}
