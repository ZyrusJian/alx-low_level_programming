#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers separated by separator
 * @n: arg count
 * @separator: 
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int sum;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start (ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg (ap, int);

	va_end (ap);
	return sum;
}
