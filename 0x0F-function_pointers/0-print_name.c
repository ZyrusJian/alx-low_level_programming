#include <stdio.h>

/**
 * print_name - writes the name to stdout
 * @name: target
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
