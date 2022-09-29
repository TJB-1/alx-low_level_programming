#include <unistd.h>
/**
 * _putchar - prints a character to standard output
 * @s: character
 * return: 1 on success and -1 on failure
 */

int _putchar(char s)
{
	return (write(1, &s, 1));
}
