#include "main.h"

/**
 * _print_rev_recursion - recursively print string in reverse
 * @s: target string
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
		if (*s == '\0')
			_putchar('\n');
	}
}
