#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: checks on the last digit of the assigned var and print
 * 
 * Return: Always zero (success)
 */
int main(void)
{
	int n, p;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	p = n % 10;
	if (p > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, p);
	}
	else if (n < 6 && p != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, p);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, p);
	}
	return (0);

