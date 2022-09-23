#include "main.h"

/**
 * _strcmp - works exactly like strcmp
 *
 * @s1: str on the left side
 * @s2: string on the right side
 *
 * Return: 0 if both strings are equal
 * 1 if s1 is greater than s2,
 * -1 if s2 is greater than s1
 */

int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while (s1[x] == s2[x] && (s1[x] || s2[x]))
	{
		x++;
	}
	return (s1[x] - s2[x]);
}
