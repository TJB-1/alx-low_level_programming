#include <stdio.h>
#include "main.h"

/**
 * puts2 - function prints every other character of a string
 * @str: string argument
 *
 * Description: Print every string character starting with 1st character \n
 * Return - 0
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\n')
	{
		if (i % 2 == 0)
			putchar(*(str + i));
		i++;
	}
	putchar(10);
}
