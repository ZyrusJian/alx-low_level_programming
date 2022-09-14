#include "main.h"

/**
 * jack_bauer - printout every minute in a 24 hour.
 *
 */

void jack_bauer(void)
{
	int n = 0;
	int k;
	int j;
	int i;

	while (n < 3)
	{
		k = 0;

		while (k < 10)
		{
			j = 0;

			while (j < 6)
			{
				i = 0;

				while (i < 10)
				{
					_putchar(n + '0');
					_putchar(k + '0');
					_putchar(':');
					_putchar(j + '0');
					_putchar(i + '0');
					_putchar('\n');
					i++;
				}

				j++;
			}
			if (n != 2 &&  k != 3)
				k++;
			else
				break;
		}

		n++;
	}

}
