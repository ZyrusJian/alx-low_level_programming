#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - prints strings separated by separator
 * @n: arg count
 * @separator: insersts separating character
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *str;
	unsigned int i;
	int nullcount;

	nullcount = 0;

	if (separator != NULL)
	{
		va_start(ap, n);

		for (i = 0; i < n; i++)
		{
			str = va_arg(ap, char*);
			if ((str == NULL) || (*str == '\0'))
				nullcount++;
		}
		va_end(ap);
		if (nullcount > 0)
		{
			printf("(nill)\n");
		}
		else
		{
			va_start(ap, n);

			for (i = 0; i < n; i++)
			{
				str = va_arg(ap, char*);
				printf("%s", str);
				if ((separator != NULL) && (i != (n - 1)))
				{
					printf("%s", separator);
				}
			}
			printf("\n");
			va_end(ap);
		}
	}
}
