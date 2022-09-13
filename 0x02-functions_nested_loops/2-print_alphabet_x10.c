#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lower case 10 times
 *
 *
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
