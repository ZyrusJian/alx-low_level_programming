#include "main.h"

/**
 * print_triangle - prints a size triangle shape using "#".
 *@size: number of times chatacter is printed.
 *
 */

void print_triangle(int size)
{
	int i = 0;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < size)
		{
			for (j = size; j > i; j--)
				_putchar(' ');
			for (j = 0; j < i + 1; j++)
				_putchar('#');
			_putchar('\n');
			i++;
		}
	}
}
