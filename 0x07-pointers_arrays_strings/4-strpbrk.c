#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s:string to check
 * @accept: string to check against
 * Return: Pointer to byte in s that matchs one of the byte in accept
 * Or Null if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; s[x]; x++)
	{
		for (x = 0; accept[y]; y++)
		{
			if (s[x] == accept[y])
				break;
		}
		if (accept[y])
			return (s + x);
	}
	return (0);
}
