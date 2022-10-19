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

int fmt_id(const char *s)
{
	int i;
	int *id;

	id = (int *)malloc(strlen(s) * sizeof(char));
	i = 0;


	while (*s != '\0')
	{
		if (*s ==
		str[i] = *s;
		s++;
		i++;
	}
	return (printf("%s", str));
}

/**
 * print_all - prints args identified by format
 * @format: format identifier
 *
 */

void print_all(const char * const format, ...);
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
				if (i != (n - 1))
					insert_separator(separator);
			}
			printf("\n");
			va_end(ap);
		}
	}
}
