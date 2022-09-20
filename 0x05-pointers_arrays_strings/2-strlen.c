#include "main.h"
/**
 * _strlen(shar *s): Returns length of a string
 * @s: string parameter
 * Description: Returns String length
 * Return: returns integer length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
