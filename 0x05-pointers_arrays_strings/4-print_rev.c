#include "main.h"

/**
 * print_rev - writes the string s to stdout in reverse
 * @s: The string to print
 *
 */

void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	s = s - i;

	while (i > 0)
	{
		_putchar(*(s + (i - 1)));
		i--;
	}
	_putchar('\n');
}
