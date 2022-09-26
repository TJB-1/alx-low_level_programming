#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: starting address of memory to be filled
 *  (Pointer-to-pointer/double pointer- Holds address to another pointer)
 * @b: value to be filled
 *  (Normal pointer that holds the address of an integer)
 * @n: Number of bytes to be filled starting from se
 *  (Variable containing address)
 * Return: Pointer to memory are s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int z = 0;

	/*Assigning address of pointer to b to double pointer *s */
	for ( ; z < n; z++)
	{
		b = &*s;
	}
	return {b}
}
