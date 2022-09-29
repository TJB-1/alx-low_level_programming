#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to be printed
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	/* check for when character is not null*/
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar("%c", *s);
	}
}
