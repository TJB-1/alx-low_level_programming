#include "main.h"

/**
 * _puts - prints a string followed by \n
 * @str: string
 *
 * Description: prints string
 * Return - string
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_puts(*(str + i));
		i++;
	}
	_puts(10);
}
