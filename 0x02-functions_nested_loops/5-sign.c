#include "main.h"
/**
 * print_sign - checks whether a number is positive or negative.
 * @n: number to be checked.
 *
 * Return: 1 for positive. 0 for zero. -1 for negative.
 */

int print_sign(int n)
{
	int retval = 0;

	if (n < 0)
	{
		_putchar('-');
		retval = -1;
	}
	else if (n > 0)
	{
		_putchar('+');
		retval = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		retval = 0;
	}
	return (retval);
}
