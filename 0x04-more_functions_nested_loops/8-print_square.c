#include "main.h"

/**
 * print_square - prints a size square shape using "#".
 *@size: number of times chatacter is printed.
 *
 */

void print_square(int size)
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
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
			i++;
		}
	}
}
