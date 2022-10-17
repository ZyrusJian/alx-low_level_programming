#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * insert_separator - inserts separator
 * @s: separating char
 *
 *
 */

char insert_separator(const char *s)
{
	int i;
	char *str;

	str = malloc(strlen(s) * sizeof(char));
	i = 0;


	while (*s != '\0')
	{
		str[i] = *s;
		s++;
		i++;
	}
	return (printf("%s", str));
}

/**
 * print_numbers - prints numbers separated by separator
 * @n: arg count
 * @separator: insersts separating character
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int num;
	unsigned int i;

	if ((n != 0) && (separator != NULL))
	{
		va_start(ap, n);

		for (i = 0; i < n; i++)
		{
			num = va_arg(ap, int);
			printf("%i", num);
			if (i != (n - 1))
				insert_separator(separator);
		}
		printf("\n");
		va_end(ap);
	}
}
