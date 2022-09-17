#include "main.h"

/**
 * print_line - prints n times "_".
 *@n: number of times chatacter is printed.
 *
 */

void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	_putchar('\n');
	}
}
