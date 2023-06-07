#include "main.h"

/**
 * _puts_recursion - recursively print char within string
 * @s: target string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		exit(0);
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
