#include "main.h"

/**
 * print_alphabet_x10 - print lowwercase alphabet x10
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int h;
	int i;

	for (x = 0; x < 10; x++)
	{
		for (i = 'a' ; i <= 'z'; i++)
		{
			_putchar(i);
		}
			_putchar('\n');
	}
}
