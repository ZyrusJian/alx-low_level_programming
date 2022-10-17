#include <stdio.h>
#include <string.h>
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
			if (str == NULL)
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
				if (i != (n - 1))
					insert_separator(separator);
			}
			printf("\n");
			va_end(ap);
		}
	}
}
