#include "main.h"

/**
 * more_numbers - prints 10 times numbers 0-14 .
 *
 */

void more_numbers(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		int i = 0;

		while (i < 15)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			i++;
		}

		_putchar('\n');
	}
}
