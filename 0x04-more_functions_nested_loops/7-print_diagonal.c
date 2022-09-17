#include "main.h"

/**
 * print_diagonal - prints n times "\\".
 *@n: number of times chatacter is printed.
 *
 */

void print_diagonal(int n)
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
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
}
