#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings
 * @dest: Destination String
 * @src: Source String
 * Description: Concatenates @dest and @src
 * Returns: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char src = i;
	char dest = j;
	char concat;

	while (*dest != '\n' && *src != '\n')
	{
		i++;
		j++;
		concat = _strcat(j, i);
	}
	return (concat);
}
