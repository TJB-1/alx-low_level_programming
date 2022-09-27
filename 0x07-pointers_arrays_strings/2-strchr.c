#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: string to check
 * @c: character to check for
 * Return: Pointer to first of character c in string
 * or NULL if character is not found
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; *(s + x); x++)
	{
		if (*(s + x) == c)
			return (s + x);
	}
	if (*(s + x) == c)
		return (s + x);
	return (0);
}
