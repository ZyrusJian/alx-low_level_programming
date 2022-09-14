#include "main.h"

/**
 * times_table - printout 9-times tabel..
 *
 */

void times_table(void)
{
	int n = 0;
	int k;
	int p;

	while (n < 10)
	{
		k = 0;

		while (k < 10)
		{
			p = n * k;
			if (p > 9)
			{
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
			else
			{
				_putchar(p + '0');
			}
			if ((k < 9) && (p >= 10))
			{
				_putchar(',');
				_putchar(' ');
			}
			else if ((p <= 9) && (k < 9))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}

			k++;
		}
		_putchar('\n');
		n++;
	}

}
