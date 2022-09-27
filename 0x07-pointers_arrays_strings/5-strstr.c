#include "main.h"

/**
 * _strstr - fins first occureence of the substring
 * @haystack:string to be which to check for needle
 * @needle: substring to find in haystack
 * Return: Pointer to start of needle in haystack or Null if no match
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int x =0, y = 0;

	while (haystack[x])
	{
		while (needle[y] && (haystack[x] == needle[0]))
		{
			if (haystack[x + y] == needle[y])
				y++;
			else
				break;
		}
		if (needle[j])
		{
			x++;
			y = 0;
		}
		else
			return (haystack + x);
	}
	return (0);
}
