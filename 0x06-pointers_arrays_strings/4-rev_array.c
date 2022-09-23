#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array
 * @n: the number of elements in the array
 *  Return: void
 */

void reverse_array(int *a, int n)
{
	int x = 0, y = n;
	int swap;

	for (; x < y / 2; x++)
	{
		swap = a[x];
		a[x] = a[n - 1];
		a[n - 1] = swap;
		n--;
	}
}
