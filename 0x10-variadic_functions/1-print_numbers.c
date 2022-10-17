#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * insert_separator - inserts separator
 * @s: separating char
 *
 *
 */

void insert_separator(const char *s)
{
	char str[3];
	int i;
	int len1, len2;

	len1 = sizeof(*s);
	len2 = sizeof(str);
	i = 0;
	if (len1 <= len2)
	{
		while (*s != '\0')
		{
		str[i] = *s;
		s++;
		i++;
		}
		printf("%s", str);
	}
	else if (len1 > len2)
	{
		printf("Error");
	}
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

	if (n != 0 && separator)
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
