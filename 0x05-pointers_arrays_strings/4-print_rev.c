#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by \n
 * @s: string
 *
 * Description: Prints string in reverse
 * Return: Nothing
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
