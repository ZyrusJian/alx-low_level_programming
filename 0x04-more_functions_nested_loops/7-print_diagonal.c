#include "main.h"

/**
 * print_diagonal - prints n times "\\".
 *@n: number of times chatacter is printed.
 *
 */

void print_diagonal(int n)
{
	int i = 0;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
}
