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
	}
	_putchar('\n');
}
