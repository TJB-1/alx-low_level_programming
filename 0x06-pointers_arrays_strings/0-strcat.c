#include "main.h"

/**
 * _strcat : concatenates two strings
 * @dest: Destination String
 * @src: Source String
 * Return: A pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int j = 0;
	int i = 0;

	while (dest[j]  != '\0')
		i++;
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	return (dest);
}
