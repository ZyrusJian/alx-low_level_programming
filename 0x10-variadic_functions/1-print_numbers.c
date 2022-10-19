#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * insert_separator - inserts separator
 * @s: separating char
 *
 * Return: separator
 */

char insert_separator(const char *s)
{
	int i;
	char *str;

	str = (char *)malloc(strlen(s) * sizeof(char));
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

	if ((separator != NULL) && (*separator))
	{
		va_start(ap, n);

		for (i = 0; i < n; i++)
		{
			num = va_arg(ap, int);
			printf("%d", num);
			if (i != (n - 1))
				insert_separator(separator);
		}
		printf("\n");
		va_end(ap);
	}
}
