#include "main.h"

/**
 * _strcat : concatenates two strings
 * @dest: Destination String
 * @src: Source String
 * Return: A pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	char i; j;

	j = 0;
	while (dest[j]  != '\0')
		j++;
	i = 0;
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	return (dest);
}
