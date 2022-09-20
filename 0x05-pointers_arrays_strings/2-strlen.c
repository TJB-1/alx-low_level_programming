#include "main.h"
/**
 * _strlen - function returns length of a string.
 * @s: string parameter
 * Description: Returns String length
 * Return: Integer length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
