#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to be printed
 * Return: 0
 */

void _print_rev_recursion(char *s)
{
	/* check for when character is not null*/
	if (*s != '\0')
	{
		return;
	}
	s++;
	/*print rev of each character in string */
	/*loop through each characte in string untill ther is none left*/
	_print_rev_recursion(s + 1);	
	/*print or return reversed loop of each schar in string*/
	_putchar(*--s);
}
