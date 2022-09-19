#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: 1st int
 * @b: 2nd integers
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
