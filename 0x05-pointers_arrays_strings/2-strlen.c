#include "main.h"

/**
 *_strlen -returns legth of string
 * @s: string
 *Return : Length of integer
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
