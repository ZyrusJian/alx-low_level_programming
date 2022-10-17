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
	int num;
	char s;
	unsigned int i;

	if (n != 0 && separator )
	{
		va_start (ap, n);
		s = *separator;
		for (i = 0; i < n; i++)
		{
			num = va_arg (ap, int);
			printf("%i", num);
			printf("%c", s);
		}
		printf("\n");
		va_end (ap);
	}
}
